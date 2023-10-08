#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if there is a non numbers symbols
 * @ar: array
 * Return: 0
 */

int check_num(char *ar)
{
	unsigned int co;


	co = 0;
	while (co < strlen(ar))
	{
		if (!isdigit(ar[co]))
		{
			return (0);
		}
		co++;
	}
		return (1);
}

/**
 * main - Print the addition of postive numbers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 Always Success
 */


int main(int argc, char *argv[])


{
	int co, convert;
	int res = 0;

	co = 1;
	while (co < argc)
	{
		if (check_num(argv[co]))
		{
			convert = atoi(argv[co]);
			res += convert;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		co++;
	}
		printf("%d\n", res);
		return (0);
}

