#include "shell.h"
/**
 * puts_grid - prints vertically the elem. of a grid
 * @grid: grid
 * Return: nothing
 */
void puts_grid(char **grid)
{
	int i;

	for (i = 0; grid[i] != NULL; i++)
	{
		write(STDOUT_FILENO, grid[i], _strlen(grid[i]));
		write(STDOUT_FILENO, "\n", 1);
	}
}
