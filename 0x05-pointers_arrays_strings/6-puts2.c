#include "main.h"
/**
 * puts2 - prints every other character of a string
 * strating with the first character
 * @str: string
 */

void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
