#include "main.h"

int al(int n, int b);

/**
 *is_prime_number - func 2 to finde if the input number is prime or not
 *@n: the number to check
 *Return: 1 if the num is prime 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (al(n, n - 1));
}

/**
 *al - any
 *@n: the real value of n
 *@b: decresing value of n
 *Return: 1 if b == 1, 0 otherwise
 */

int al(int n, int b)
{
	if (b == 1)
		return (1);
	if (n % b == 0 && b > 0)
	{
		return (0);
	}
		return (al(n, b - 1));
}
