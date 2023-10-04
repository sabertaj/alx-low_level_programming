#include "main.h"
#include <stdio.h>

/**
 * str_concat - function 2 concatenates 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: NULL on failure or a pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int l, j;
	char *t;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l = 0; s1[l] != '\0'; l++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		l++;
	}
	l++;
	t = (char *)malloc(sizeof(char) * l);
	if (t == NULL)
	{
		return (NULL);
	}
	for (l = 0; s1[l] != '\0'; l++)
	{
		t[l] = s1[l];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		t[l] = s2[j];
		l++;
	}
	t[l + 1] = '\0';
	return (t);
}
