#include "holberton.h"

/**
 * _strlen - returns the lenght of a string
 * @s : the string that we will find the length
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n])
	{
		++n;
	}
	return (n);
}

/**
 * *_strncat - appends the src string to the dest string
 * @dest : the destination string
 * @src : the source string
 * @n : is the number of bytes
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{

	int i;
	int dest_len = _strlen(dest);

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
