#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - lenght of a string
 * @s: the string
 *
 * Return: lenght
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

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
	int len1, len2;
	int i = 0, j = 0;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	s3 = malloc(len1 + len2 + 1 * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		s3[i] += s2[j];
		j++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
