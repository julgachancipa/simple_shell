#include "shell.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space
 * @new_size: new size, in bytes of the new memory block
 * Return: NULL or ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np;
	unsigned int i;

	if (ptr == NULL)
	{
		np = malloc(new_size);
		return (np);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	np = malloc(new_size);
	if (np == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		np[i] = ((char *)ptr)[i];
	free(ptr);
	return (np);
}
