#include "main.h"

/**
 *_islower- function that checks for lowercase character
 *@c: is the char to be checked
 *Return:1 if lower 0 if not
 */
int _islower(int c)
{

	if ((c <= 'z') && (c >= 'a'))
		return (1);
	else
		return (0);
}

