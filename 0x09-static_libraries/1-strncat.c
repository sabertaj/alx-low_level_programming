#include "main.h"

/**
 *_strncat - conc 2strings
 *@dest: varib
 *@src: varib
 *@n: numbe
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; y < n && src[y] != '\0'; x++)
	{
		dest[x] = src[y];
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
