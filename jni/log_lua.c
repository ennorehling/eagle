/*
** Lua binding: log
** Generated automatically by tolua++-1.0.92 on Sun Sep  4 19:21:14 2011.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_log_open (lua_State* tolua_S);

#include "log.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
}

/* function: log_write */
#ifndef TOLUA_DISABLE_tolua_log_log_write00
static int tolua_log_log_write00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int prio = ((int)  tolua_tonumber(tolua_S,1,0));
  const char* tag = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* text = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   log_write(prio,tag,text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_log_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"log",0);
  tolua_beginmodule(tolua_S,"log");
   tolua_function(tolua_S,"write",tolua_log_log_write00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_log (lua_State* tolua_S) {
 return tolua_log_open(tolua_S);
};
#endif

