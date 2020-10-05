#include "holberton.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s : the character
 * @b : the constant byte
 * @n : the number
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *str = s;

	for (i = 0; i < n; i++)
		str[i] = b;
	return (str);
}
