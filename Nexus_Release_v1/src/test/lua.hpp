#ifndef lua_h
#define lua_h

/* Lua Version */
#define LUA_VERSION "Lua 5.4"

/* Lua Types */
#define LUA_TNIL 0
#define LUA_TBOOLEAN 1
#define LUA_TLIGHTUSERDATA 2
#define LUA_TNUMBER 3
#define LUA_TSTRING 4
#define LUA_TTABLE 5
#define LUA_TFUNCTION 6
#define LUA_TUSERDATA 7
#define LUA_TTHREAD 8

/* Lua C API */
typedef struct lua_State lua_State;

int luaopen_io(lua_State *L);
int luaopen_base(lua_State *L);
int luaopen_table(lua_State *L);
int luaopen_math(lua_State *L);
int luaopen_string(lua_State *L);
int luaopen_bit32(lua_State *L);
int luaopen_debug(lua_State *L);
int luaopen_os(lua_State *L);
int luaopen_package(lua_State *L);
int luaopen_coroutine(lua_State *L);

#endif /* lua_h */
