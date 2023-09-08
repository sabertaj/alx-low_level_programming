#include<stdio.h>
/**
 *main-Entry
 *
 *Return:0
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}
	putchar('\n');
	return (0);
}
