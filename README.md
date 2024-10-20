# Discord Bot Factory
Generate your Discord bot's base with all your desired functions at the ready

# Features
- Easily make a base for your Discord bot with CLI or config file
- Base commands are included by default
    - If you want a bot from scratch, pass `scratch` on `base_user_functions`\
      and `none` on `base_bg_functions` and `external_packages`
- Multiple choices for pre-written user-side interactions:
    - [ ] Bot maintenance comfort functions\
          (redeploy if C++, restart if TS/JS or Python, debug, etc.)
    - [ ] Server management (roles, channels, etc.)
    - [ ] Member management (ban, kick, timeout, etc.)
    - [ ] Fun & games (economy and related)
    - [ ] Alternate reality game ([Enigma](https://github.com/IOServerSoftware/halloween-enigma)-like puzzle capabilities)
- Multiple choices for pre-written background interactions:
    - [ ] SQL database management via SQLite
    - [ ] Engagement logging (message, voice chat, etc.)
    - [ ] Watchdog (in case of any suspicious users)
- Add external packages for DBF to include in your bot base
- Bot bases available in multiple programming languages that have a Discord wrapper/library
    - [ ] C++ with [D++](https://dpp.dev)
    - [ ] Node.js/TypeScript with [Discord.js](https://discord.js.org)
    - [ ] Python with [Nextcord](https://nextcord.dev)

# How to use
There are two ways you can use DBF.

### Command line
You can make your base directly from the command-line application by executing it without options like so:
```
dbf
```
This brings up a setup prompt asking you for certain things that relate to your bot, including but not limited to `language`, `name`, `base_user_functions`, `base_bg_functions`, `entry_point`, `external_packages`, among others.\
Fill those in, and it should generate a new folder for your bot with files in your desired configuration and in your desired programming language.

### Config file
Alternatively, you can tell `dbf` what you want done on a `dbf.cfg` file formatted like so:
```
language: cpp
name: mybot
base_user_functions:
    maintenance
    server_management
    member_management
    fun_and_games
    message_handling
base_bg_functions:
    sql_database_management
    engagement_logging
    watchdog
external_packages:
    sqlite3
    csv_parser
```
Then, in your terminal, `cd` to the directory where `dbf.cfg` is located, and execute the following command:
```
dbf --build-from-config
```
It will now generate a base according to your configuration file.

*If you are, however, working on a Node.js/TypeScript project, there are some more variables involved.*

Your JS/TS config file would look like this:
```
language: (js/ts)
name: mybot
version: 1.0.0
description: A Discord bot
base_user_functions:
    maintenance
    server_management
    member_management
    fun_and_games
    message_handling
base_bg_functions:
    sql_database_management
    engagement_logging
    watchdog
external_packages:
    sqlite3
    csv_parser
```