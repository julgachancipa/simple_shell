#include "shell.h"
/**
 * shell_loop - wait for a string a process it.
 * @env: enviroment vars.
 * Return: nothing
 */
void shell_loop(char **env)
{
	char *line, *delim, *path_con, **grid, **path_dir;
	int status;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);
	/*get the path content*/
	path_con = _getenv(env, "PATH");
	/*token. PATH*/
	delim = ":";
	path_dir = shell_token(path_con, delim);
	delim = " \t\r\a\n";
	do {
		line = shell_read(path_dir);
		grid = shell_token(line, delim);
		status = shell_status(grid, path_dir, env);
		free(line);
		free(grid);
		if (status == -1)
		{
			free(path_dir);
			exit(EXIT_SUCCESS);
		}
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);
	} while (status);
	free(path_dir);
}
