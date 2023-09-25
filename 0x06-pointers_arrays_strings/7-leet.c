#include "main.h"

/**
 *leet - only 1337
 *@v: a value
 *Return: v value
 */

char *leet(char *v)
{
	int x, y;
	char a1[] = "aAeEoOttlL";
	char a2[] = "4433007711";

	for (x = 0; v[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (v[x] == a1[y])
			{
				v[x] = a2[y];
			}
		}
	}
	return (v);
}
