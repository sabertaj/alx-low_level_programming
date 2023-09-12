#include "main.h"

/**
 *_isalpha-  function that checks for alphabetic character
 *@c: is the char to be checked
 *Return:1 if alphabeti charactr 0 otherwhise
 */
int _isalpha(int c)
{
	if ((c >= 'A') && (c <= 'z'))
		return (1);
	else
		return (0);
}
