#include "holberton.h"

/**
 * *_memcpy - copies memory area
 * @dest: the destination
 * @src: the source
 * @n: the n bytes
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *src_char = src;
	char *dest_char = dest;
	for (i = 0; i < n; i++)
		dest_char[i] = src_char[i];
	return (dest_char);
}
