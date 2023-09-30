#include "main.h"

/**
 *_pow_recursion - func 2 calculate x to the power y
 *@x: number to calculate
 *@y: the power of the number
 *Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
