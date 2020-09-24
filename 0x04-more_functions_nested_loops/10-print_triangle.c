#include "holberton.h"
#include <stdio.h>

/**
 * print_triangle - check the code for Holberton School students.
 * @size: the number of line to print
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int nb1 = 1, nb2 = size, nb3 = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (nb1 <= size)
	{
		nb1++;
		if (size > 1)
		{
			while (nb2 >= nb1)
			{
				_putchar(' ');
				nb2--;
			}
			while (nb3 < nb1)
			{
				_putchar('#');
				nb3++;
			}
	}
		else
		{
			_putchar('#');
		}
		_putchar('\n');
		nb2 = size;
		nb3 = 1;
	}
}
