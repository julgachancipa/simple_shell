#include "shell.h"
/**
 * grid_cpy - creates a cpy of a grid
 * @full_file: dir + file
 * @grid: grid
 * Return: new grid
 */
char **grid_cpy(char *full_file, char **grid)
{
	int i, j;
	char **new_grid;

	for (j = 0; grid[j]; j++)
		;
	new_grid = malloc(sizeof(char *) * (j + 1));
	if (!new_grid)
	{
		perror("lsh");
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < j; i++)
		new_grid[i] = 0;

	new_grid[0] = _strdup(full_file);
	i = 1;
	while (grid[i])
	{
		if (grid[i])
		{
			new_grid[i] = _strdup(grid[i]);
		}
		i++;
	}
	new_grid[i] = NULL;
	return (new_grid);
}
/**
 * path_exe - create a child process and wait until it ends.
 * @new_grid: grid with the new [0] parameter
 * @env: env. vars
 * Return: 1 on success or exit in errors
 */
int path_exe(char **new_grid, char **env)
{
	int status = 1;
	pid_t child;

	child = fork();
	if (child == -1)
	{
		perror("lsh");
	}
	else if (child == 0)
	{
		if (execve(new_grid[0], new_grid, env) == -1)
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
/**
 * shell_path - look if the token is a file in the path dir.
 * @grid: tokenized line.
 * @path_dir: PATH dirs.
 * @env: env vars
 * Return: 1 success or 0 if not
 */
int shell_path(char **grid, char **path_dir, char **env)
{
	char *full_file;
	char **new_grid;
	int i, j;
	struct stat st;

	/*find the file in the directory*/
	for (i = 0; path_dir[i]; i++)
	{
		full_file = malloc(20 * sizeof(char));
		_strcpy(full_file, path_dir[i]);
		_strcat(full_file, "/");
		_strcat(full_file, grid[0]);
		if (stat(full_file, &st) == 0)
		{
			new_grid = grid_cpy(full_file, grid);
			path_exe(new_grid, env);
			free(full_file);
			j = 0;
			if (new_grid[j])
			{
				while (new_grid[j])
				{
					free(new_grid[j]);
					j++;
				}
			}
			free(new_grid[j]);
			free(new_grid);
			return (1);
		}
		free(full_file);
	}
	return (0);
}
