#include "holberton.h"

/**
 * puts2 - print a string
 * @str : the string that we will print
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int n = 0;

	while (str[n])
	{
		_putchar(str[n]);
		n += 2;
	}
	_putchar('\n');
}
