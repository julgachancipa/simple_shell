#include "shell.h"
/**
 * shell_builtins - detect a builtin
 * @grid: tokens
 * @env: env. vars
 * Return: -1 for exit, 1 on success or 0 if not
 */
int shell_builtins(char **grid, char **env)
{
	if (_strcmp(grid[0], "exit") == 0)
		return (-1);
	if (_strcmp(grid[0], "env") == 0)
	{
		puts_grid(env);
		return (1);
	}
	return (0);
}
