// automatically generated by admSerialization.py, do not edit!
#include "ADM_default.h"
#include "ADM_paramList.h"
#include "ADM_coreJson.h"
#include "fdk_encoder.h"
bool  fdk_encoder_jserialize(const char *file, const fdk_encoder *key){
admJson json;
json.addUint32("bitrate",key->bitrate);
json.addUint32("bitrate_mode",key->bitrate_mode);
json.addUint32("profile",key->profile);
json.addBool("afterburner",key->afterburner);
return json.dumpToFile(file);
};
bool  fdk_encoder_jdeserialize(const char *file, const ADM_paramList *tmpl,fdk_encoder *key){
admJsonToCouple json;
CONFcouple *c=json.readFromFile(file);
if(!c) {ADM_error("Cannot read json file");return false;}
bool r= ADM_paramLoadPartial(c,tmpl,key);
delete c;
return r;
};
