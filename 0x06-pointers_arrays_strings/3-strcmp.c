#include "main.h"

/**
 *_strcmp - function to compare 2 deffrent strings
 *@s1: str numb 1
 *@s2: str numn 2
 *Return: the result of the compar
 */

int _strcmp(char *s1, char *s2)
{
	int s;

	for (s = 0; s1[s] != '\0' && s2[s] != '\0'; s++)
	{
		if (s1[s] != s2[s])
		{
			return (s1[s] - s2[s]);
		}
	}
	return (0);
}
