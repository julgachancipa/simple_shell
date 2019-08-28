#include "shell.h"
/**
 * _puts - prints a string.
 * @str : pointer-parameter
 * Return: ntg.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == '\0')
			break;
		_putchar(str[i]);
	}
}
