#include "main.h"
/**
 * swap_int - a function that swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
