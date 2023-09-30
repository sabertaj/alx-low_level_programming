#include "main.h"

int sq(int n, int b);

/**
 *_sqrt_recursion - func to calculate the sqrt of a number
 *@n: the number to finde it sqrt
 *Return: natural sqer of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sq(n, 0));
}

/**
 *sq - function to finde the sqrt of a number
 *@n: the number
 *@b: the posible sqrt
 *Return: natural sqrt, -1 if no natural sqrt
 */

int sq(int n, int b)
{
	if (b * b > n)
	{
		return (-1);
	}
	if (b * b == n)
	{
		return (b);
	}
	return (sq(n, b + 1));
}
