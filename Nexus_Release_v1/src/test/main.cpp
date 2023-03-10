#include "lua.hpp"
#include <string>
#include <iostream>

int main()
{
    // Initialize Lua interpreter
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);

    // Load Lua script
    luaL_dofile(L, "check_file_integrity.lua");

    // Call Lua function to check file integrity
    std::string filename = "../build/Nexus.tar.gz";
    lua_getglobal(L, "check_file_integrity");
    lua_pushstring(L, filename.c_str());
    lua_call(L, 1, 1);

    // Retrieve result from Lua function
    bool integrity_check_passed = lua_toboolean(L, -1);
    lua_pop(L, 1);

    // Print result
    if (integrity_check_passed)
    {
        std::cout << "File integrity check passed for file " << filename << std::endl;
    }
    else
    {
        std::cout << "File integrity check failed for file " << filename << std::endl;
    }

    // Clean up Lua interpreter
    lua_close(L);

    return 0;
}
