#include "shell.h"
/**
 * shell_read - get the line
 * @path_dir: path directories
 * Return: the line
 */
char *shell_read(char **path_dir)
{
	char *line = NULL;
	size_t sz = 0;
	int flag;

	flag = getline(&line, &sz, stdin);
	if (flag == -1)
	{
		free(line);
		free(path_dir);
		exit(0);
	}
	line[flag - 1] = '\0';
	return (line);
}
