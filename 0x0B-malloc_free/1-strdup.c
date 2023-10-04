#include "main.h"

/**
 * _strdup - a function 2 return a pointer to a newly allocated space
 * in memoruy,which consist acopy of the string given as a parameter
 * @str: the string 2 cpy
 * Return: NULL if str = NULL or a pointer 2 the duplicated string
 */

char *_strdup(char *str)
{
	char *op;
	unsigned int x;

	if (*str == '\0')
	{
		return (0);
	}
	for (x = 0; str[x] != '\0'; x++)
	{
	}
	op = (char *)malloc(sizeof(char) * x);
	for (x = 0; str[x] != '\0'; x++)
	{
		op[x] = str[x];
	}

	return (op);
}
