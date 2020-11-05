#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: the number
 * @index: the index of the bit
 *
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index <= 64)
	{
		n = n >> index;
		n = n & 1;
		return (n);
	}
	else
		return (-1);
}
