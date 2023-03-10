# include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to string1
 * @s2: pointer to string2
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		res = *s1 - *s2;

	return (res);
}
