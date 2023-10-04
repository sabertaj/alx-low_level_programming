#include "main.h"

/**
 * create_array - function 2 create an array of chars and initialized
 * with aspecific char
 * @size: the size of the array 2b created
 * @c: the specific char
 * Return: a pointer 2 the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *sa;

	if (size == 0)
	{
		return (0);
	}
	sa = (char *)malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		sa[i] = c;
	}
	return (sa);
}
