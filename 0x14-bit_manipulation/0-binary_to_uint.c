#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number of 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i = 0;
	int c;
	unsigned int len = 0;

	while (b[len])
	{
		len++;
	}
	if(!b)
		return (0);
	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			i += k;
		}
		k *= 2;
	}
	return (i);
}
