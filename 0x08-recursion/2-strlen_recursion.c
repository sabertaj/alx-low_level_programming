#include "main.h"

/**
 *_strlen_recursion - func 2 return a string length
 *@s: the string 2 return it length
 *Return: the string length
 */

int _strlen_recursion(char *s)
{
	int co;

	co = 0;
	if (*s)
	{
		co++;
		co += _strlen_recursion(s + 1);
	}
	return (co);
}
