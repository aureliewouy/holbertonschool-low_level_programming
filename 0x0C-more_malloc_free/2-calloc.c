#include "holberton.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: the number of elements
 * @size: the size bytes
 *
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *byte;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	byte = malloc(nmemb * size);
	if (byte == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		byte[i] = 0;
	}
	return (byte);
}
