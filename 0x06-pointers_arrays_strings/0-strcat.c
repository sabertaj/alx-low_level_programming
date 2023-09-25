#include "main.h"

/**
 *_strcat -  function that concatenates two strings.
 *@dest: str1
 *@src: str2
 * Return: pointer to the result.
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; src[y] != '\0'; x++)
	{
		dest[x] = src[y];
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
