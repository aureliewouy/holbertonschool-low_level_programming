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

	lastDigit = n % 10;
	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}
	_putchar((lastDigit) + '0');

	return (lastDigit);
}
