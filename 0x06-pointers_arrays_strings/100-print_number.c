#include "holberton.h"

/**
 * print_number - Print a number
 * @n: the number
 *
 * Return: nothing.
 *
 */

void print_number(int n)
{
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	if (num / 10)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}
