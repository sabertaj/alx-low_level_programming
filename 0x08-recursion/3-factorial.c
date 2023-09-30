#include "main.h"

/**
 *factorial - func 2 calculate the factorial of number n.
 *@n: the number to calculate it factorial.
 *Return: the factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
