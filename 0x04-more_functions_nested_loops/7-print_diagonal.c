#include "holberton.h"
#include <stdio.h>

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: the number of line to print
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	long int line = 92;
	int i = 0, j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (i < n)
	{
		i++;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar(line);
		_putchar('\n');
		j = 0;
	}
}
