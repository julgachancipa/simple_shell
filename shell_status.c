#include "shell.h"
/**
 * shell_status - determines if the tokens are executable or not.
 * @grd: pointer of tokens
 * @path_dir: grid of dirs in the path
 * @env: enviroment vars.
 * @line: input line
 * @ex: exit number
 *
 * Return: status
 */
int shell_status(char **grd, char **path_dir, char **env, char *line, int *ex)
{
	int flag = 0;

	/*Nothing comming*/
	if (grd[0] == NULL)
		return (1);
	/*builtins*/
	flag = shell_builtins(grd);
	if (flag)
		return (flag);
	/*PATH commands*/
	if ((grd[0][0] != '/') && (shell_path(grd, path_dir, env, ex)))
		return (1);
	/*exe commands or no valid*/
	return (shell_process(grd, env, line, path_dir, ex));
}
