#include "shell.h"
/**
 * _strcat - concatenates two strings.
 * @dest : pointer-parameter
 * @src : pointer-parameter
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int sz;
	int i;

	for (sz = 0; dest[sz]; sz++)
		;
	for (i = 0; src[i]; i++)
	{
		dest[sz + i] = src[i];
	}
	dest[sz + i] = '\0';
	return (dest);
}
