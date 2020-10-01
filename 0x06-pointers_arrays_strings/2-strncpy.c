#include "holberton.h"

/**
 * *_strncpy - appends the src string to the dest string
 * @dest : the destination string
 * @src : the source string
 * @n : is the number of bytes
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
