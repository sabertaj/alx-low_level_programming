#include "main.h"

/**
 *jack_bauer- a function that prints every minute of the day of Jack Bauer
 *starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int h1, h2, m1, m2;

	for (h1 = 0; h1 <= 2; h1++)
	{
		for (h2 = 0; h2 <= 9; h2++)
		{
			for (m1 = 0; m1 <= 5; m1++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					if (!(h1 == 2) || (h2 <= 3))
					{
					_putchar(48 + h1);
					_putchar(48 + h2);
					_putchar(':');
					_putchar(48 + m1);
					_putchar(48 + m2);
					_putchar('\n');
					}
				}
			}
		}
	}
}
