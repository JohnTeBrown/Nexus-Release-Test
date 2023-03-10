#ifndef lauxlib_h
#define lauxlib_h

#include <lua.h>

int luaL_newmetatable(lua_State *L, const char *tname);

void luaL_setmetatable(lua_State *L, const char *tname);

void luaL_getmetatable(lua_State *L, const char *tname);

int luaL_loadfile(lua_State *L, const char *filename);

int luaL_loadstring(lua_State *L, const char *s);

void luaL_checkversion_(lua_State *L, lua_Number ver, size_t sz);

int luaL_argerror(lua_State *L, int arg, const char *extramsg);

const char * luaL_checkstring(lua_State *L, int arg);

lua_Number luaL_checknumber(lua_State *L, int arg);

int luaL_checkinteger(lua_State *L, int arg);

void luaL_checkstack(lua_State *L, int sz, const char *msg);

void luaL_checktype(lua_State *L, int arg, int t);

void * luaL_checkudata(lua_State *L, int ud, const char *tname);

void luaL_where(lua_State *L, int level);

int luaL_error(lua_State *L, const char *fmt, ...);

int luaL_fileresult(lua_State *L, int stat, const char *fname);

int luaL_execresult(lua_State *L, int stat);

int luaL_ref(lua_State *L, int t);

void luaL_unref(lua_State *L, int t, int ref);

int luaL_loadbuffer(lua_State *L, const char *buff, size_t sz, const char *name);

void luaL_addchar(luaL_Buffer *B, char c);

void luaL_addsize(luaL_Buffer *B, size_t n);

void luaL_addstring(luaL_Buffer *B, const char *s);

void luaL_addlstring(luaL_Buffer *B, const char *s, size_t l);

void luaL_pushresult(luaL_Buffer *B);

#endif /* lauxlib_h */
