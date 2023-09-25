#include "main.h"

/**
 *cap_string - capital only
 *@s1: string 2 capital
 *Return: pointer 2 the result
 */

char *cap_string(char *s1)
{
	int x;

	while (s1[x])
	{
		while (!(s1[x] >= 'a' && s1[x] <= 'z'))
			x++;

		if (s1[x - 1] == ' ' ||
		s1[x - 1] == '\t' ||
		s1[x - 1] == '\n' ||
		s1[x - 1] == ',' ||
		s1[x - 1] == ';' ||
		s1[x - 1] == '.' ||
		s1[x - 1] == '!' ||
		s1[x - 1] == '?' ||
		s1[x - 1] == '"' ||
		s1[x - 1] == '(' ||
		s1[x - 1] == ')' ||
		s1[x - 1] == '}' ||
		s1[x - 1] == '{' ||
		x == 0)
			s1[x] = s1[x] - 32;

		x++;
	}

	return (s1);
}
