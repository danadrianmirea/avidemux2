// automatically generated by admSerialization.py, do not edit!
#include "ADM_default.h"
#include "ADM_paramList.h"
#include "ADM_coreJson.h"
#include "av1aom_encoder.h"
bool  av1aom_encoder_jserialize(const char *file, const av1aom_encoder *key){
admJson json;
json.addCompressParam("ratectl",key->ratectl);
json.addUint32("nbThreads",key->nbThreads);
json.addBool("autoThreads",key->autoThreads);
json.addUint32("speed",key->speed);
json.addUint32("keyint",key->keyint);
json.addBool("fullrange",key->fullrange);
return json.dumpToFile(file);
};
bool  av1aom_encoder_jdeserialize(const char *file, const ADM_paramList *tmpl,av1aom_encoder *key){
admJsonToCouple json;
CONFcouple *c=json.readFromFile(file);
if(!c) {ADM_error("Cannot read json file");return false;}
bool r= ADM_paramLoadPartial(c,tmpl,key);
delete c;
return r;
};
