#include "main.h"

/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int i;

	if (ptr != NULL)
		clone = ptr;
	else
	{
	return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (0);
	}
	relloc = malloc(new_size);
	if (relloc == NULL)
		return (0);

	for (i = 0; i < (old_size || i < new_size); i++)

	{
		*(relloc + i) = clone[i];
	}

	free(ptr);

	return (relloc);
}
