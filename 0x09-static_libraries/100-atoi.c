#include "main.h"

/**
 * _atoi - func 3 convert a string 2 an integer.
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int si, o;
	unsigned int res = 0;

	si = 1;
	o = 0;
	while (!(s[o] <= '9' && s[o] >= '0') && s[o] != '\0')
	{
		if (s[o] == '-')
		si *= -1;
		o++;
	}
	while (s[o] <= '9' && (s[o] >= '0' && s[o] != '\0'))
	{
		res = (res * 10) + (s[o] - '0');
		o++;
	}
	res *= si;
	return (res);
}
