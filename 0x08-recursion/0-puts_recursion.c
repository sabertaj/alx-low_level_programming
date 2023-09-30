#include "main.h"

/**
 *_puts_recursion - func 2 put a string
 *@s: the string 2 put
 *Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
