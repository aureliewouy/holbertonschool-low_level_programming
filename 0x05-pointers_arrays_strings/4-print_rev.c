#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s : the string that we will print in reverse
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int n = 0;
	while(s[n])
	{
		n++;
	}
	n -= 1;
	while (s[n] > 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
