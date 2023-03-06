#include "main.h"
/**
 * _strchr - this function locates a character
 * in a string
 * @s: string to be checked
 * @c: character of interest
 * Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
