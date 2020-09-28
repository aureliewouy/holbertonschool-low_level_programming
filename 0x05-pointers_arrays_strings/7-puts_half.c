#include "holberton.h"

/**
 * puts_half - print half of a string
 * @str : the string that we will print half
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int n = 0;

	while (str[n])
	{
		n++;
	}
	if ( n % 2 != 0)
	{
		n = (n - 1) / 2;
	}
	else
	{
		n = n / 2;
	}
	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
