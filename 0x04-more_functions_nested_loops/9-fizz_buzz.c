#include <stdio.h>

/**
 * main - Entry point
 * For multiples of 3, print 'Fizz'.
 * For multiples of 5, print 'Buzz'.
 * For multiples of both 3 and 5, print 'FizzBuzz'.
 * Return: 0
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");

	return (0);
}
