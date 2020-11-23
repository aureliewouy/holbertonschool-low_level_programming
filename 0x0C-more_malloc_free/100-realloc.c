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
        char *dest, *src;
        unsigned int i;

        if (new_size == old_size)
                return (ptr);

        if (ptr == NULL)
        {
                ptr = malloc(new_size);
                if (ptr == NULL)
                {
			free(ptr);
                        return (NULL);
                }
                return (ptr);
        }

        if (new_size == 0 && ptr != NULL)
        {
                free(ptr);
                return (NULL);
        }

        dest = malloc(new_size);
        if (dest == NULL)
                return (NULL);

        src = ptr;

        for (i = 0; i < new_size && i < old_size; i++)
                dest[i] = src[i];
        free(ptr);
        return (dest);
}
