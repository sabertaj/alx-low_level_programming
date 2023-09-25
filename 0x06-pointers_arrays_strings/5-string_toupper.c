#include "main.h"

/**
 *string_toupper - function 2 change lower 2 upper case
 *@c: points
 *Return: c
 */

char *string_toupper(char *c)
{
	int f;

	for (f = 0; c[f] != '\0'; f++)
	{
		if (c[f] >= 'a' && c[f] <= 'z')
		{
			c[f] = c[f] - 32;
		}
	}
	return (c);
}
