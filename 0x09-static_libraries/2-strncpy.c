#include "main.h"

/**
 *_strncpy - function that copies a string.
 *@dest: in
 *@src: inp
 *@n: inp
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int s;

	for (s = 0; s  < n && src[s] != '\0'; s++)
	{
		dest[s] = src[s];
	}
	while (s < n)
	{
		dest[s] = '\0';
		s++;
	}
	return (dest);
}
