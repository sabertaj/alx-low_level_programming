#include <stdio.h>
#include <stdlib.h>

/**
 *main - a program the prints it name follwed by a new line
 *@argc: argument count
 *@argv: argv: argument vector
 *Return: 0 always success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
