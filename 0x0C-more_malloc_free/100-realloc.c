#include <stdlib.h>
#include "holberton.h"

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: the size for ptr
 * @new_size: new size new memory block
 *
 * Return: new memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	ptr = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			((char *)ptr)[i] = 0;
		}

	}
	else
	{
		free(ptr);
                for (i = 0; i < new_size; i++)
                {
                        ((char *)ptr)[i] = 0;
                }

	}
	return (ptr);
}
