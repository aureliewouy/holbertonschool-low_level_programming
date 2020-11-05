#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: the number
 * @index: the index
 *
 * Return: 1 if it worked
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
