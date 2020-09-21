#include "holberton.h"
/**
 * print_to_98 - check the code for Holberton School students.
 *@c: start number
 *
 * Return: Always 0.
 */

void print_to_98(int c)
{
	if (c < 99)
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
			else
			{
				_putchar('\n');
			}
			c++;
		}
	}
	else if (c > 97)
	{
		while (c > 99)
		{
			_putchar((c / 100) + '0');
			_putchar(((c / 10) % 10) + '0');
			_putchar((c % 10) + '0');
			if (c != 98)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
			c--;
		}
		while (c >= 98)
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			if (c != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
			_putchar('\n');
			}
			c--;
		}
	}
	else if (c < 0)
	{
		while ( c < 0)
		{
			_putchar('-');
			_putchar((c) + '0');
			c++;
		}
	}
}
