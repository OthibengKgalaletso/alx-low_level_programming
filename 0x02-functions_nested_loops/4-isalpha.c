#include "main.h"

/**
 * _isalpha -used to check for alphabetic character
 * @c: character checked for
 * Return: 1 if c is a letter (lowercase or uppercase)
 * or 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
