#include "shell.h"
/**
 * shell_status - determines if the tokens are executable or not.
 * @grid: pointer of tokens
 * @path_dir: grid of dirs in the path
 * @env: enviroment vars.
 * @line: input line
 * Return: status
 */
int shell_status(char **grid, char **path_dir, char **env, char *line)
{
	int flag = 0;

	/*Nothing comming*/
	if (grid[0] == NULL)
		return (1);
	/*builtins*/
	flag = shell_builtins(grid, env);
	if (flag)
		return (flag);
	/*PATH commands*/
	if ((grid[0][0] != '/') && (shell_path(grid, path_dir, env)))
		return (1);
	/*exe commands or no valid*/
	return (shell_process(grid, env, line, path_dir));
}
