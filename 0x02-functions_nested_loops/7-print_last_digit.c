#include "holberton.h"

/**
 * print_last_digit - Print the last digit.
 *@n: The number to absolute.
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		n = -n;
	}
	lastDigit = n % 10;
	_putchar((lastDigit) + '0');

	return (lastDigit);
}
