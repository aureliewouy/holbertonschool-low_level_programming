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
	void *ret = 0;
	char *write, *read;

	if (new_size == old_size)
		return (ptr);

	if (new_size > 0 || ptr == 0)
	{
		ret = malloc(new_size);
		if (ret == 0)
			return (0);
	}
	if (new_size > 0 && ptr != 0)
	{
		write = ret;
		read = ptr;
		if (new_size < old_size)
			old_size = new_size;
		while (old_size)
		{
			old_size--;
			*write++ = *read++;
		}
	}

	free(ptr);
	return (ret);
}
