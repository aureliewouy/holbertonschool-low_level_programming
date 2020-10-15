#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

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
 * *string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second strinhg.
 * @n: numbers of bytes
 *
 * Return: newly allocated space memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	unsigned int i = 0, j = 0, k = 0;
	char *s3;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len2)
		n = len2;
	s3 = malloc((len1 + n + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	while (i < len1)
	{
		s3[k] = s1[i];
		i++;
		k++;
	}
	while (j < n)
	{
		s3[k] = s2[j];
		k++;
		j++;
	}
	s3[k] = '\0';
	return (s3);
}
