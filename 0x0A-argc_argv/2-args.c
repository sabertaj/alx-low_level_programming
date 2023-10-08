#include "main.h"
#include <stdio.h>

/**
 *main - program 2 print all argument it receives
 *@argc: counter for the number of argument
 *@argv: argument vector
 *Return: 0 always success
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
