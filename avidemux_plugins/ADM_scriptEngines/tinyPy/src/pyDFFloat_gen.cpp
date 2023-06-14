// Generated by admPyClass.pl from binding/pyDFFloat.admPyClass, DO NOT edit !
tp_obj zzpy__pyDFFloat_get(tp_vm *vm)
{
  tp_obj self = tp_getraw(vm);
  IScriptEngine *engine = (IScriptEngine*)tp_get(vm, vm->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(vm);
  ADM_scriptDFFloatHelper *me = (ADM_scriptDFFloatHelper *)pm.asThis(&self, ADM_PYID_DF_FLOAT);
  char const *key = pm.asString();
  if (!strcmp(key, "value"))
  {
     if(!me) pm.raise("pyDFFloat:No this!");
     return tp_number(me->value());
  }
  return tp_get(vm, self, tp_string(key));
}
tp_obj zzpy__pyDFFloat_set(tp_vm *vm)
{
  tp_obj self = tp_getraw(vm);
  IScriptEngine *engine = (IScriptEngine*)tp_get(vm, vm->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(vm);
  ADM_scriptDFFloatHelper *me = (ADM_scriptDFFloatHelper *)pm.asThis(&self, ADM_PYID_DF_FLOAT);
  char const *key = pm.asString();
  if (!strcmp(key, "value"))
  {
     if(!me) pm.raise("pyDFFloat:No this!");
     double val = pm.asDouble();
     me->setValue(val);
     return tp_None;
  }
  return tp_None;
}
// Dctor
static void myDtorpyDFFloat(tp_vm *vm,tp_obj self)
{
  ADM_scriptDFFloatHelper *cookie = (ADM_scriptDFFloatHelper *)self.data.val;
  if (cookie) delete cookie;
  self.data.val = NULL;
}
// Ctor (str double double int)
static tp_obj myCtorpyDFFloat(tp_vm *vm)
{
  tp_obj self = tp_getraw(vm);
  TinyParams pm(vm);
  const char *p0 = pm.asString();
  double p1 = pm.asDouble();
  double p2 = pm.asDouble();
  int p3 = pm.asInt();
  ADM_scriptDFFloatHelper *me = new ADM_scriptDFFloatHelper(p0,p1,p2,p3);
  tp_obj cdata = tp_data(vm, ADM_PYID_DF_FLOAT, me);
  cdata.data.info->xfree = myDtorpyDFFloat;
  tp_set(vm, self, tp_string("cdata"), cdata);
  return tp_None;
}
static tp_obj zzpy__pyDFFloat_help(TP)
{
  PythonEngine *engine = (PythonEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;

  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "variables:\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "double\t value\n");

  return tp_None;
}
tp_obj initClasspyDFFloat(tp_vm *vm)
{
  tp_obj myClass = tp_class(vm);
  tp_set(vm,myClass, tp_string("__init__"), tp_fnc(vm,myCtorpyDFFloat));
  tp_set(vm,myClass, tp_string("__set__"), tp_fnc(vm,zzpy__pyDFFloat_set));
  tp_set(vm,myClass, tp_string("__get__"), tp_fnc(vm,zzpy__pyDFFloat_get));
  tp_set(vm,myClass, tp_string("help"), tp_fnc(vm,zzpy__pyDFFloat_help));
  return myClass;
}
