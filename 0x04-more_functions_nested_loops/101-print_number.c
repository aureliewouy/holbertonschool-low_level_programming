#include "holberton.h"

/**
 * print_number - Print the alphabet.
 * @n: this is the number to print
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar(45);
	}
	if (n < 9)
	{
		_putchar(n + '0');
	}
	else if (n < 99)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 999)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 9999)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
}
