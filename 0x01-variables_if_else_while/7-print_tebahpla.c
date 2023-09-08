#include<stdio.h>
/**
 *main-Entry
 *
 *Return:0
 */

int main(void)
{
	int h;

	h = 'z';
	while (h >= 'a')
	{
		putchar(h);
		h--;
	}
	putchar('\n');
	return (0);
}
