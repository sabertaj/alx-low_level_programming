#include<stdio.h>
/**
 *main-Entry
 *
 *Return:0
 */

int main(void)
{
	int low;

	low = 'a';
	while (low <= 'z')
	{
	if (low != 'q' && low != 'e')
	{
		putchar(low);
	}
		low++;
	}
	putchar('\n');
	return (0);
}
