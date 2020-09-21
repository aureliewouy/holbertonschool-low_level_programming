#include "holberton.h"

/**
 * print_last_digit - Print the last digit.
 *@n: The number to absolute.
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return (n);
}
