#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: the number
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	n = n & 1;
	_putchar(n + '0');
}
