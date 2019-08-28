<p>
<img width="200" src="https://lh4.googleusercontent.com/yUzaviDgzDIq4-ZHp9k0YU5fsz0nOdekNRt1qHgp7Qdlw5BNfe6bETEf5ZWd-Vkn_m57BPx7HcDrwFK41ptLnQLTNipWmTAtiQwZL_8s97Nkzn94xP7XVKb3RnV0fx8QEZoxlkVd" align="right" >
</p>

# Simple_shell
------------
## Table of Contents
* [Description](#description)
* [Files](#files)
* [Requirements](#requirements)
* [Installation](#installation)
* [Compile](#compile)
* [Execute](#execute)
* [Example](#example)
* [Bugs](#bugs)
* [Authors](#authors)

## Description
Unix shell is a command-line interpreter or shell written by Ken Thompson in 1971 that provides a command line user interface for Unix-like operating systems.


## Files
File | Description
--- | ---
`shell.h` | header file
`main.c` | Execute shell_loop.c
`shell_loop.c` | funtion tha wait for a string a process it.
`shell_read.c` | Function that obtains and reads a line
`shell_token.c` | Funtion tha tokenizes the string using two points as delimiters.
`shell_status.c` | Function that executes the processes
`shell_path.c` | Function related to executing commands
`shell_prosses` | function that creates a new process
`shell_buitlings` | Funtion thet execute buitlings
`puts_grid.c` | Funtion tha print a matrix
`str_funt`.c | contains different functions for the handling of strings
`man_1_simple_shell` | Manual page for the simple_shell

---
## Requirements
 * Simple_shell is designed to run on the Ubuntu 14.04 LTS Linux environment.
 * Must be compiled using the GNU v. gcc 4.8.4 compiler collection with flags-Wall, -Werror, -Wextra, and -pedantic.

## Installation
   - Clone this repository: `git clone "https://github.com/julgachancipa/simple_shell.git"`
   
## Compile
   - `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
   
## Execute
   - Run the shell in interactive mode: `./hsh`
   - Or run the shell in non-interactive mode: `echo "pwd" | ./hsh`

## Example
Run the executable in your terminal after compiling:
```
$ ./hsh
$ # This is our rendition of the shell
$ ls -la
total 96
drwxrwxr-x 2 vagrant vagrant  4096 Aug 28 02:46 .
drwxrwxr-x 5 vagrant vagrant  4096 Aug 27 21:00 ..
-rw-rw-r-- 1 vagrant vagrant  1257 Aug 27 16:11 _getenv.c
-rw-rw-r-- 1 vagrant vagrant   266 Aug 27 03:02 main.c
-rw-rw-r-- 1 vagrant vagrant   246 Aug 27 03:02 _putchar.c
-rw-rw-r-- 1 vagrant vagrant   218 Aug 27 03:02 _puts.c
-rw-rw-r-- 1 vagrant vagrant   221 Aug 27 04:27 puts_grid.c
-rw-rw-r-- 1 vagrant vagrant   686 Aug 27 03:02 _realloc.c
-rwxrwxr-x 1 vagrant vagrant 14594 Aug 28 00:36 shell
-rw-rw-r-- 1 vagrant vagrant   333 Aug 27 20:20 shell_buitlins.c
-rw-rw-r-- 1 vagrant vagrant   915 Aug 27 20:21 shell.h
-rw-rw-r-- 1 vagrant vagrant   631 Aug 27 20:08 shell_loop.c
-rw-rw-r-- 1 vagrant vagrant  1848 Aug 28 00:33 shell_path.c
-rw-rw-r-- 1 vagrant vagrant   469 Aug 27 16:22 shell_process.c
-rw-rw-r-- 1 vagrant vagrant   318 Aug 27 19:38 shell_read.c
-rw-rw-r-- 1 vagrant vagrant   543 Aug 28 02:46 shell_status.c
-rw-rw-r-- 1 vagrant vagrant   687 Aug 27 21:14 shell_token.c
-rw-rw-r-- 1 vagrant vagrant   328 Aug 27 03:02 _strcat.c
-rw-rw-r-- 1 vagrant vagrant   305 Aug 27 19:53 _strcmp.c
-rw-rw-r-- 1 vagrant vagrant   247 Aug 27 20:52 _strcpy.c
-rw-rw-r-- 1 vagrant vagrant   547 Aug 27 05:07 _strdup.c
```
---

## Bugs
There are no known bugs.

## Authors
[Diego Ramos](https://github.com/DiegoRmsR) | [@Imdiegoramoss](https://twitter.com/Imdiegoramoss)

[Emma Gachancipa](https://github.com/julgachancipa) | [@julgachancipa](https://twitter.com/julgachancipa)
