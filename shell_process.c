#include "shell.h"
/**
 * shell_process - create a child process and wait until it ends.
 * @grid: pointer to tokens
 * @env: env vars
 * Return: 1 on success or exit in errors
 */
int shell_process(char **grid, char **env)
{
	int status = 1;
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
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(child, &status, WUNTRACED);
	}
	return (1);
}
