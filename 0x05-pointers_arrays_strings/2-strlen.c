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
