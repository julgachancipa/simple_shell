#include "shell.h"
/**
 * var_name - find the var name in the i pos.
 * @var: variable in the i pos.
 * Return: the name of the var.
 */
char *var_name(char *var)
{
	int i;
	char *v_name;

	v_name = malloc(1024);
	if (!v_name)
	{
		perror("lsh: ");
		exit(EXIT_FAILURE);
	}
	for (i = 0; var[i] != '='; i++)
		v_name[i] = var[i];
	v_name[i] = '\0';
	return (v_name);
}
/**
 * _strmatch - looks if the var exists
 * @name: var to find
 * @var: var name in the i pos.
 * Return: 1 on success or 0
 */
int _strmatch(const char *name, char *var)
{
	int i;

	for (i = 0; name[i] && var[i]; i++)
	{
		if (name[i] != var[i])
			return (0);
	}
	if (name[i] != var[i])
		return (0);
	return (1);
}
/**
 * var_con - returns the content of a var
 * @var: var string
 * Return: content
 */
char *var_con(char *var)
{
	int i;

	for (i = 0; var[i] != '='; i++)
		;
	return (var + i + 1);
}
/**
 * _getenv - get the content of an env. var.
 * @env: grid of env. vars.
 * @name: var. name
 * Return: the content or NULL
 */
char *_getenv(char **env, const char *name)
{
	char *v_name;
	int i;

	for (i = 0; env[i]; i++)
	{
		v_name = var_name(env[i]);
		if (_strmatch(name, v_name))
		{
			free(v_name);
			return (var_con(env[i]));
		}
		free(v_name);
	}
	return (NULL);
}
