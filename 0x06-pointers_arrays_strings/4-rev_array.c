#include "main.h"
/**
 *reverse_array - reverse an array
 *@a: thhe array 2b reversed
 *@n:num of elemints on array
 *Return: nothing
 */

void reverse_array(int *a, int n)
{
	int t, k;

	for (t = 0; t < n--; t++)
	{
		k = a[t];
		a[t] = a[n];
		a[n] = k;
	}
}

