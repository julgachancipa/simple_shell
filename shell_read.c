#include "shell.h"
/**
 * shell_read - get the line
 * @path_dir: path directories
 * @exit_status: exit number
 * Return: the line
 */
char *shell_read(char **path_dir, int *exit_status)
{
	char *line = NULL;
	size_t sz = 0;
	int flag;

	flag = getline(&line, &sz, stdin);
	if (flag == EOF)
	{
		free(line);
		free(path_dir);
		free(exit_status);
		exit(0);
	}
	line[flag - 1] = '\0';
	return (line);
}
