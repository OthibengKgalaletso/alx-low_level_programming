#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: pointer
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
