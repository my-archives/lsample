#ifndef LSAMPLE
#define LSAMPLE

#include "lua.h"
//#include "lualib.h"
#include "lauxlib.h"

#if LUA_VERSION_NUM < 502
/* lua_rawlen: Not entirely correct, but should work anyway */
# define lua_rawlen lua_objlen
/* lua_...uservalue: Something very different, but it should get the job done */
# define lua_getuservalue lua_getfenv
# define lua_setuservalue lua_setfenv
# define luaL_newlib(L,l) (lua_newtable(L), luaL_register(L,NULL,l))
# define luaL_setfuncs(L,l,n) (assert(n==0), luaL_register(L,NULL,l))
#endif

LUALIB_API int luaopen_lsample (lua_State *L);

#endif
