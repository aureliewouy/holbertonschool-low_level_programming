#include "holberton.h"
/**
 * print_to_98 - check the code for Holberton School students.
 *@c: start number
 *
 * Return: Always 0.
 */

void print_to_98(int c)
{
	while ( c < 99)
	{
		if (c < 10)
		{
			_putchar((c) + '0');
		}
		else
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		if (c != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	c++;
	}
	while (c > 97)
	{
		_putchar((c / 10) + '0');
		_putchar((c % 10) + '0');
		c--;
	}
}
