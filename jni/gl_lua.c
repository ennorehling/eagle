/*
** Lua binding: gl
** Generated automatically by tolua++-1.0.92 on Sun Sep  4 22:04:14 2011.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_gl_open (lua_State* tolua_S);

#include <EGL/egl.h>
#include <GLES/gl.h>

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
}

/* function: glClearColor */
#ifndef TOLUA_DISABLE_tolua_gl_gl_glClearColor00
static int tolua_gl_gl_glClearColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float tolua_var_1 = ((float)  tolua_tonumber(tolua_S,1,0));
  float tolua_var_2 = ((float)  tolua_tonumber(tolua_S,2,0));
  float tolua_var_3 = ((float)  tolua_tonumber(tolua_S,3,0));
  float tolua_var_4 = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   glClearColor(tolua_var_1,tolua_var_2,tolua_var_3,tolua_var_4);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'glClearColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: glClear */
#ifndef TOLUA_DISABLE_tolua_gl_gl_glClear00
static int tolua_gl_gl_glClear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int tolua_var_5 = ((unsigned int)  tolua_tonumber(tolua_S,1,0));
  {
   glClear(tolua_var_5);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'glClear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_gl_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"gl",0);
  tolua_beginmodule(tolua_S,"gl");
   tolua_constant(tolua_S,"GL_DEPTH_BUFFER_BIT",GL_DEPTH_BUFFER_BIT);
   tolua_constant(tolua_S,"GL_STENCIL_BUFFER_BIT",GL_STENCIL_BUFFER_BIT);
   tolua_constant(tolua_S,"GL_COLOR_BUFFER_BIT",GL_COLOR_BUFFER_BIT);
   tolua_function(tolua_S,"glClearColor",tolua_gl_gl_glClearColor00);
   tolua_function(tolua_S,"glClear",tolua_gl_gl_glClear00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_gl (lua_State* tolua_S) {
 return tolua_gl_open(tolua_S);
};
#endif

