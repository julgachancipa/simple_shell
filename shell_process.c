#include "shell.h"
/**
 * shell_process - create a child process and wait until it ends.
 * @grid: pointer to tokens
 * @env: env vars
 * @line: input line
 * @path_dir: path dirs.
 * @e: exit number
 *
 * Return: 1 on success or exit in errors
 */
int shell_process(char **grid, char **env, char *line, char **path_dir, int *e)
{
	int status;
	pid_t child;

	child = fork();
	if (child == -1)
	{
		perror("lsh");
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
		if (execve(grid[0], grid, env) == -1)
		{
			perror("lsh");
			free(line);
			free(grid);
			free(path_dir);
			exit(127);
		}
	}
	else
	{
		waitpid(child, &status, WUNTRACED);
		if (WIFEXITED(status))
			*ex = WEXITSTATUS(status);
	}
	return (1);
}
