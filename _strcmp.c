#include "shell.h"
/**
 * _strcmp - compares two strings
 * @str1: first string
 * @str2: second string
 * Return: 0 on success
 */

int _strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0')
			return (0);
		i++;
	}
	return (str1[i] - str2[i]);
}
