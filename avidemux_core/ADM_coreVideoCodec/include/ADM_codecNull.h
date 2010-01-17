/***************************************************************************
                          ADM_codecNull.h  -  description
                             -------------------
    begin                : Fri Apr 19 2002
    copyright            : (C) 2002 by mean
    email                : fixounet@free.fr
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
class decoderNull:public decoders
{
protected:

public:
  decoderNull (uint32_t w, uint32_t h,uint32_t fcc, uint32_t extraDataLen, uint8_t *extraData,uint32_t bpp)
        :decoders (  w,   h,  fcc,   extraDataLen,  extraData,  bpp)
  {
  }
  virtual ~ decoderNull ()
  {
  };
  virtual bool uncompress (ADMCompressedImage * in, ADMImage * out)
  {
    memcpy (out->data, in->data, in->dataLength);
    uint64_t pts,dts;
    pts=in->demuxerPts;
    dts=in->demuxerDts;
    if(pts!=ADM_COMPRESSED_NO_PTS)
    {
        out->Pts=pts;
    }else
    {
        out->Pts=dts;
    }
    return 1;
  }
};
