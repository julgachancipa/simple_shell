#include "shell.h"
/**
 * main - calls the shell loop.
 * @ac: number of arguments
 * @av: grid of args.
 * @env: grid of enviroment vars.
 * Return: EXIT_SUCCESS
 */
int main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;

	shell_loop(env);

	return (0);
}
