#ifndef SH_H
#define SH_H
/*variables*/
#define BUF_SZ 1024
extern char **environ;
/*libraries*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
/*functions*/
char *_strdup(char *str);
void _puts(char *str);
int _putchar(char c);
void puts_grid(char **grid);
void shell_loop(char **env);
char *shell_read(char **path_read, int *exit_status);
char **shell_token(char *line, char *delim);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _puts_grid(char **grid);
int shell_process(char **grd, char **env, char *line, char **path_dir, int *e);
int shell_status(char **grd, char **path_dir, char **env, char *line, int *ex);
char *_getenv(char **env, const char *name);
int shell_path(char **grid, char **path_dir, char **env, int *ex);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strcmp(char *str1, char *str2);
int _strlen(char *str1);
int shell_builtins(char **grid);
#endif
