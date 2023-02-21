#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: checked number
 * Return: 1 if n is greater than zero,
 * -1 if n is less than zero
 *  and 0 if n is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
