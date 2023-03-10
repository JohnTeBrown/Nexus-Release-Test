#ifndef lualib_h
#define lualib_h

#include <lua.h>

void luaL_openlibs(lua_State *L);

int luaopen_base(lua_State *L);

int luaopen_table(lua_State *L);

int luaopen_io(lua_State *L);

int luaopen_os(lua_State *L);

int luaopen_string(lua_State *L);

int luaopen_math(lua_State *L);

int luaopen_debug(lua_State *L);

int luaopen_package(lua_State *L);

#endif /* lualib_h */
