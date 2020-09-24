#include "holberton.h"
#include <stdio.h>

/**
 * print_line - check the code for Holberton School students.
 * @n: the number of line to print
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	char line = 95;
	int nb;
	for (nb = 1; nb <= n; nb++)
	{
		_putchar(line);
	}
		_putchar('\n');
}
