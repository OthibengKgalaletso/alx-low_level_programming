#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: points to the buffer
 * @src: Source string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
} 
