#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: newly allocated space in memory.
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	char *s;
	int i = 0, j = 0;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	s3 = malloc((i + j) + 1 * sizeof(char));
	s = s3;
	while (*s1)
	{
		*s = *s1;
		s++;
		s1++;
	}
	while (*s2)
	{
		*s += *s2;
		s++;
		s2++;
	}
	s = '\0';
	return (s3);
}
