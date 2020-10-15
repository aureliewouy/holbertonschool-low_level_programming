#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * *malloc_checked - allocates memory
 * @b: the number of bytes to allocate
 *
 * Return: nothing.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *c;

	c = malloc(b * sizeof(void *));
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
