// Generated by admPyClass.pl from binding/tools.admPyClass, DO NOT edit !
// date -> str pyTool_date(IEditor)
static tp_obj zzpy_date(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_TOOLS);

  IEditor *p0 = editor;
  char *r = pyTool_date(p0);
  if(!r) return tp_None;

  tp_obj o = tp_string_copy(tp, r, strlen(r));
  ADM_dealloc(r);
  return o;
}
// isalnum -> int pyTool_isalnum(IEditor str)
static tp_obj zzpy_isalnum(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_TOOLS);

  IEditor *p0 = editor;
  const char *p1 = pm.asString();
  int r = pyTool_isalnum(p0, p1);
  return tp_number(r);
}
// isalpha -> int pyTool_isalpha(IEditor str)
static tp_obj zzpy_isalpha(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_TOOLS);

  IEditor *p0 = editor;
  const char *p1 = pm.asString();
  int r = pyTool_isalpha(p0, p1);
  return tp_number(r);
}
// isdigit -> int pyTool_isdigit(IEditor str)
static tp_obj zzpy_isdigit(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_TOOLS);

  IEditor *p0 = editor;
  const char *p1 = pm.asString();
  int r = pyTool_isdigit(p0, p1);
  return tp_number(r);
}
// islower -> int pyTool_islower(IEditor str)
static tp_obj zzpy_islower(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_TOOLS);

  IEditor *p0 = editor;
  const char *p1 = pm.asString();
  int r = pyTool_islower(p0, p1);
  return tp_number(r);
}
// isspace -> int pyTool_isspace(IEditor str)
static tp_obj zzpy_isspace(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_TOOLS);

  IEditor *p0 = editor;
  const char *p1 = pm.asString();
  int r = pyTool_isspace(p0, p1);
  return tp_number(r);
}
// isupper -> int pyTool_isupper(IEditor str)
static tp_obj zzpy_isupper(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_TOOLS);

  IEditor *p0 = editor;
  const char *p1 = pm.asString();
  int r = pyTool_isupper(p0, p1);
  return tp_number(r);
}
// lower -> str pyTool_lower(IEditor str)
static tp_obj zzpy_lower(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_TOOLS);

  IEditor *p0 = editor;
  const char *p1 = pm.asString();
  char *r = pyTool_lower(p0, p1);
  if(!r) return tp_None;

  tp_obj o = tp_string_copy(tp, r, strlen(r));
  ADM_dealloc(r);
  return o;
}
// randint -> int pyTool_randint(IEditor int int)
static tp_obj zzpy_randint(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_TOOLS);

  IEditor *p0 = editor;
  int p1 = pm.asInt();
  int p2 = pm.asInt();
  int r = pyTool_randint(p0, p1, p2);
  return tp_number(r);
}
// time -> double pyTool_time(IEditor)
static tp_obj zzpy_time(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_TOOLS);

  IEditor *p0 = editor;
  double r = pyTool_time(p0);
  return tp_number(r);
}
// upper -> str pyTool_upper(IEditor str)
static tp_obj zzpy_upper(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_TOOLS);

  IEditor *p0 = editor;
  const char *p1 = pm.asString();
  char *r = pyTool_upper(p0, p1);
  if(!r) return tp_None;

  tp_obj o = tp_string_copy(tp, r, strlen(r));
  ADM_dealloc(r);
  return o;
}
tp_obj zzpy__pyTools_get(tp_vm *vm)
{
  tp_obj self = tp_getraw(vm);
  IScriptEngine *engine = (IScriptEngine*)tp_get(vm, vm->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(vm);
  void *me = (void *)pm.asThis(&self, ADM_PYID_TOOLS);
  char const *key = pm.asString();
  if (!strcmp(key, "date"))
  {
    return tp_method(vm, self, zzpy_date);
  }
  if (!strcmp(key, "isalnum"))
  {
    return tp_method(vm, self, zzpy_isalnum);
  }
  if (!strcmp(key, "isalpha"))
  {
    return tp_method(vm, self, zzpy_isalpha);
  }
  if (!strcmp(key, "isdigit"))
  {
    return tp_method(vm, self, zzpy_isdigit);
  }
  if (!strcmp(key, "islower"))
  {
    return tp_method(vm, self, zzpy_islower);
  }
  if (!strcmp(key, "isspace"))
  {
    return tp_method(vm, self, zzpy_isspace);
  }
  if (!strcmp(key, "isupper"))
  {
    return tp_method(vm, self, zzpy_isupper);
  }
  if (!strcmp(key, "lower"))
  {
    return tp_method(vm, self, zzpy_lower);
  }
  if (!strcmp(key, "randint"))
  {
    return tp_method(vm, self, zzpy_randint);
  }
  if (!strcmp(key, "time"))
  {
    return tp_method(vm, self, zzpy_time);
  }
  if (!strcmp(key, "upper"))
  {
    return tp_method(vm, self, zzpy_upper);
  }
  return tp_get(vm, self, tp_string(key));
}
tp_obj zzpy__pyTools_set(tp_vm *vm)
{
  tp_obj self = tp_getraw(vm);
  IScriptEngine *engine = (IScriptEngine*)tp_get(vm, vm->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(vm);
  void *me = (void *)pm.asThis(&self, ADM_PYID_TOOLS);
  char const *key = pm.asString();
  return tp_None;
}
// Dctor
static void myDtorpyTools(tp_vm *vm,tp_obj self)
{
}
// Ctor ()
static tp_obj myCtorpyTools(tp_vm *vm)
{
  tp_obj self = tp_getraw(vm);
  TinyParams pm(vm);
  void *me = NULL;
  tp_obj cdata = tp_data(vm, ADM_PYID_TOOLS, me);
  cdata.data.info->xfree = myDtorpyTools;
  tp_set(vm, self, tp_string("cdata"), cdata);
  return tp_None;
}
static tp_obj zzpy__pyTools_help(TP)
{
  PythonEngine *engine = (PythonEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;

  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "constructor:\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "obj	Tools()\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "methods:\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "str\t date()\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "int\t isalnum(str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "int\t isalpha(str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "int\t isdigit(str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "int\t islower(str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "int\t isspace(str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "int\t isupper(str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "str\t lower(str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "int\t randint(int start, int stop)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "double\t time()\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "str\t upper(str)\n");

  return tp_None;
}
tp_obj initClasspyTools(tp_vm *vm)
{
  tp_obj myClass = tp_class(vm);
  tp_set(vm,myClass, tp_string("__init__"), tp_fnc(vm,myCtorpyTools));
  tp_set(vm,myClass, tp_string("__set__"), tp_fnc(vm,zzpy__pyTools_set));
  tp_set(vm,myClass, tp_string("__get__"), tp_fnc(vm,zzpy__pyTools_get));
  tp_set(vm,myClass, tp_string("help"), tp_fnc(vm,zzpy__pyTools_help));
  return myClass;
}
