#include "shell.h"
/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: str len
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
		;
	return (len);
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: str size
 * Return: string
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(_strlen(str) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
