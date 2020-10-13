#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - Creates an array of chars
 * @size: the size of the array
 * @c: the charater
 *
 * Return: a pointer to the array ofNULL if size = 0.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));
	if (size == 0)
		return (NULL);
        if (s == 0)
                return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
