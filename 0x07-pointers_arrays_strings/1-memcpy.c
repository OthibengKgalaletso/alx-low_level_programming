#include "main.h"
/**
 *_memcpy - this function copies a memory area
 *@dest: memory area to be copied to
 *@src: source memory area
 *@n: number of bytes
 *Return: copied memory (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
