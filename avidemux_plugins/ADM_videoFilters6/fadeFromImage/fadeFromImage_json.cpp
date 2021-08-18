// automatically generated by admSerialization.py, do not edit!
#include "ADM_default.h"
#include "ADM_paramList.h"
#include "ADM_coreJson.h"
#include "fadeFromImage.h"
bool  fadeFromImage_jserialize(const char *file, const fadeFromImage *key){
admJson json;
json.addUint32("startTime",key->startTime);
json.addUint32("endTime",key->endTime);
json.addUint32("effect",key->effect);
json.addFloat("effectParam",key->effectParam);
return json.dumpToFile(file);
};
bool  fadeFromImage_jdeserialize(const char *file, const ADM_paramList *tmpl,fadeFromImage *key){
admJsonToCouple json;
CONFcouple *c=json.readFromFile(file);
if(!c) {ADM_error("Cannot read json file");return false;}
bool r= ADM_paramLoadPartial(c,tmpl,key);
delete c;
return r;
};
