#include "main.h"

/**
 * _strcat - this functions concatenates two strings
 * @src: string 1 (source string)
 * @dest: string 2
 * Return: Pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
