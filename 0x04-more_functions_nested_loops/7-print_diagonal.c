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
	int i = 0, j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			i++;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			j = 0;
		}
	}
}
