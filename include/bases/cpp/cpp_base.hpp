#pragma once
#ifndef dbf_cpp_base_hpp
#define dbf_cpp_base_hpp

#include "../dbf.hpp"

std::vector<fs::path> cpp_base_filepaths = {
    "include/{bot}.h",
    "src/main.cpp",
    "CMakeLists.txt",
    "LICENCE",
    "README.md"
};

std::vector<fs::path> cpp_base_directories = {
    "include",
    "lib",
    "src"
};

std::vector<std::string> cpp_main_header_slash_interactions = {
    "#pragma once",
    "#ifndef {bot}_h",
    "#define {bot}_h",
    "",
    "#include <dpp/dpp.h>",
    "#include <string>",
    "#include <iostream>",
    "",
    "#endif"
};

std::vector<std::string> cpp_gitignore = {
    "# Prerequisites",
    "*.d",
    "",
    "# Compiled Object files",
    "*.slo",
    "*.lo",
    "*.o",
    "*.obj",
    "",
    "# Precompiled Headers",
    "*.gch",
    "*.pch",
    "",
    "# Compiled Dynamic libraries",
    "*.so",
    "*.dylib",
    "*.dll",
    "",
    "# Fortran module files",
    "*.mod",
    "*.smod",
    "",
    "# Compiled Static libraries",
    "*.lai",
    "*.la",
    "*.a",
    "*.lib",
    "",
    "# Executables",
    "*.exe",
    "*.out",
    "*.app",
    "",
    "# Others",
    ".vscode/",
    ".DS_Store",
    "build*",
    "src/cfg/config.cpp",
    "src/cfg/cfg.cpp",
    "lib/"
};

std::vector<std::string> cpp_entry_point_slash_cmds = {
    "#include <dpp/dpp.h>",
    "#include <iostream>",
    "#include \"../include/{bot}.h\"",
    "",
    "int main() {",
    "    dpp::cluster bot(bot_token, {intents});",
    "    bot.on_log(dpp::utility::cout_logger);",
    "    bot.on_ready([&](const dpp::ready_t& event) {",
    "        std::cout << \"Logged in as \" << bot.get_user(event.user.id).username << \"!\" << std::endl;",
    "    });",
    "    bot.on_slashcommand([&](const dpp::slashcommand_t& event) {",
    "        if (event.command.get_command_name() == \"ping\") {",
    "            event.reply(\"Pong!\");",
    "            return;",
    "        }",
    "    });",
    "    dpp::slashcommand ping_cmd(\"ping\", \"Responds with \"Pong!\" (Use this, it's the one that works.)\", bot.me.id);"
    "    bot.global_command_create(dpp::slashcommand(ping_cmd));"
    "    bot.start();",
    "    return 0;",
    "}"

};

#endif