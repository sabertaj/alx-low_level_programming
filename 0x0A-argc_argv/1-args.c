#include "main.h"
#include <stdio.h>

/**
 *main - a programe that print the numbers of arguments passed into it
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 always success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	argc -= 1;
	printf("%d\n", argc);
	return (0);
}
