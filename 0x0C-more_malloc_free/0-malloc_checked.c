#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: number of memory (bytes) to be allocated
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
