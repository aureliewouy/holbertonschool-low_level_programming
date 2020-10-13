#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: the string.
 *
 * Return: a pointer to a new string or NULL.
 */

char *_strdup(char *str)
{
	char *new_s;
	char *dup;
	int size;

	if (str == NULL)
		return (NULL);
	while (str[size])
		size++;
	printf("size : %d", size);
	new_s = malloc((size + 1) * sizeof(char));
	dup = new_s;
	while (*str)
	{
		*dup = *str;
		dup++;
		str++;
	}
	dup = '\0';
	return (new_s);
}
