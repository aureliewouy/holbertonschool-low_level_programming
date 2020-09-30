#include "holberton.h"

/**
 * _strlen - returns the lenght of a string
 * @s : the string that we will find the length
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n])
	{
		++n;
	}
	return (n);
}

/**
 * puts_half - print half of a string
 * @str : the string that we will print half
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int n = _strlen(str);

	if (n % 2 != 0)
	{
		n = (n - 1) / 2;
	}
	n = n / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
