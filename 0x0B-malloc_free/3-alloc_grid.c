#include "main.h"

/**
 * alloc_grid - a function 2 return a pointer to a 2 dimensional array of int
 * @width: the width of the array
 * @height: the height of the array
 * Return: NULL on failure and return a pointer to a 2 dimesional array of int
 */

int **alloc_grid(int width, int height)
{
	int n, m;
	int **p1;

	if (height <= 0 || width <= 0)
		return (NULL);
	p1 = malloc(sizeof(int *) * height);
	if (p1 == NULL)
		return (NULL);
	for (n = 0; n < height; n++)
	{
		p1[n] = malloc(sizeof(int) * width);
		if (p1[n] == NULL)
		{
			for (; n >= 0; n--)
				free(p1[n]);
			free(p1);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
		{
			p1[n][m] = 0;
		}
	}
	return (p1);
}
