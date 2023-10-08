#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - program that multiplies 2 numbers
 *@argc: argument aount
 *@argv: argument vector
 *Return: 0 if success, 1 if not
 */

int main(int argc, char *argv[])
{
	int m, n, res;

	if (argc == 3)
	{
	m = atoi(argv[1]);
	n = atoi(argv[2]);
	res = m * n;
	printf("%d\n", res);
	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
