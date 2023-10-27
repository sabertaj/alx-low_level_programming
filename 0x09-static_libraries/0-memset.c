#include "main.h"

/**
 * _memset - function 2 fill a block of memory with a specific value
 * @s: address of memory 2b filled
 * @b: value
 * @n: number of bytes
 * Return: array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
