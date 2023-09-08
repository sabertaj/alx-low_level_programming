#include<stdio.h>
/**
 *main-Entry
 *
 *Return:0
 */

int main(void)
{
	int up, low;

	up = 'A';
	low = 'a';
	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}
	putchar('\n');
	return (0);
}
