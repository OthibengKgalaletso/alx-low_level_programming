#include "main.h"
/**
 * reverse_array - reverses rhe content of an array of integers
 * @n: number of elements of the array
 * @a: array of integers
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
