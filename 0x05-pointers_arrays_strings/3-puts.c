#include "holberton.h"

/**
 * _puts - print a string
 * @str : the string that we will print
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n])
	{
		putchar(str[n]);
		n++;
	}
	putchar('\n');
}
