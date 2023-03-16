#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int n;

	int range = max - min  + 1;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(range * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (n = 0; range > 0; range--, n++, min++)
		ptr[n] = min;

	return (ptr);
}
