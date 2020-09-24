#include "holberton.h"
#include <stdio.h>

/**
 * print_square - check the code for Holberton School students.
 * @size: the number of line to print
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	char square = '#';
	int nb1 = 1, nb2 = 1;

	while (nb1 <= size)
	{
		nb1++;
		while (nb2 < size)
		{
			_putchar(square);
			nb2++;
		}
		nb2 = 1;
		_putchar(square);
		_putchar('\n');
	}
}
