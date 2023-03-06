#!/bin/bash

# install clang compiler
sudo apt install clang -y


# Verify file with fancy structure
echo "Verifying your file"
echo "===================="
echo

# Prints our reused bash script with ASCII text
echo "      __  __          __      __     _       "
echo "     / / / /___  ____/ /___ _/ /_  _| |_ ___ "
echo "    / /_/ / __ \/ __  / __ \`/ __ \/ __/ __ \\"
echo "   / __  / /_/ / /_/ / /_/ / /_/ / /_/ /_/ /"
echo "  /_/ /_/\____/\__,_/\__,_/_.___/\__/\____/ "
echo "                                             "
echo "                 Made By D&R                 "
echo

# Prints emoji
echo "🚀  Compiling C++ file..."

# Runs clang on C++ file
clang++ src/test/main.cpp -o bin/output

# Print success message
echo "✅  Compilation complete!"
