#include "holberton.h"

/**
 * flip_bits - the number of bits you would need to flip to get from
 * one number to another
 * @n: the number.
 * @m: the other
 *
 * Return: the number of bits you need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int index = 0;
	unsigned long int diff = n ^ m;
	while (diff)
	{
		index += (diff & 1);
		diff = diff >> 1;
	}
	return (index);
}
