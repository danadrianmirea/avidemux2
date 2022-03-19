/**

        \file ADM_eac3info
        \brief extract info from EAC3/A52B/DD+ streams
        Author: mean <fixounet@free.fr>, (C) 2009
        Code very derived from ffmpeg (tables etc...)

*/

#include "ADM_default.h"
#include "ADM_eac3info.h"
#define ADM_LAV_NO_CONFIG
extern "C"
{
#define sign_extend
#include "libavcodec/ac3.h"
#include "libavcodec/ac3_parser_internal.h"
#include "libavutil/mem.h"
};

/**
    \fn ADM_EAC3GetInfo
*/
bool ADM_EAC3GetInfo(const uint8_t *data, uint32_t len, uint32_t *syncoff, ADM_EAC3_INFO *info, bool plainAC3)
{
    uint32_t of=0;
    uint64_t channelLayout=0;
    *syncoff=0;
    uint8_t *buf=new uint8_t[len+AV_INPUT_BUFFER_PADDING_SIZE];
    memset(buf,0,len+AV_INPUT_BUFFER_PADDING_SIZE);
    memcpy(buf,data,len);
    memset(info,0,sizeof(ADM_EAC3_INFO));
#define CLEANUP delete [] buf; buf=NULL; av_free(hdr); hdr=NULL;
    //	printf("\n Syncing on %d \n",len);
    // Search for startcode
    // 0x0b 0x77
    while(1)
    {
        if(len<7)
        {
            ADM_warning("Not enough info to find a52 syncword\n");
            delete [] buf;
            buf=NULL;
            return false;
        }
        if(*(buf+of)!=0x0b || *(buf+of+1)!=0x77)
        {
            if(info->frameSizeInBytes)
            {
                delete [] buf;
                buf = NULL;
                return true;
            }
            len--;
            of++;
            continue;
        }
        AC3HeaderInfo *hdr=NULL;
        if(avpriv_ac3_parse_header(&hdr,buf+of,len)<0)
        {
            if(info->frameSizeInBytes)
            {
                CLEANUP
                return true;
            }
            len--;
            of++;
            ADM_info("Sync failed... continuing\n");
            continue;
        }
        if(!plainAC3 && hdr->bitstream_id<=10) // this is not EAC3 but plain ac3
        {
            ADM_info("Bitstream ID = %d: not EAC3\n",hdr->bitstream_id);
            CLEANUP
            return false;
        }
        if(plainAC3 && hdr->bitstream_id>10) // this is not AC3 but EAC3
        {
            ADM_info("Bitstream ID = %d: not AC3\n",hdr->bitstream_id);
            CLEANUP
            return false;
        }
//            printf("Sync found at offset %"PRIu32"\n",of);
        if(!info->frameSizeInBytes)
        {
            *syncoff=of;
            info->frequency = hdr->sample_rate;
        }else if(hdr->frame_type != EAC3_FRAME_TYPE_DEPENDENT || hdr->sample_rate != info->frequency)
        {
            CLEANUP
            return true;
        }
        info->byterate += (uint32_t)hdr->bit_rate>>3;
        // The parser doesn't support a custom channel map.
        // In this case channel_layout is wrong. FIXME
        channelLayout |= hdr->channel_layout;
        info->channels = av_get_channel_layout_nb_channels(channelLayout);
        info->frameSizeInBytes += hdr->frame_size;
        if(len > info->frameSizeInBytes)
        {
            len -= hdr->frame_size;
            of += hdr->frame_size;
            av_free(hdr);
            hdr = NULL;
            continue;
        }
        info->samples=265*6; // ??
        CLEANUP
        return true;
    }
    delete [] buf;
    buf=NULL;
    return true;
}
