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
 * puts2 - print a string
 * @str : the string that we will print
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int n = 0, len = _strlen(str);

	while (n < len)
	{
		_putchar(str[n]);
		n += 2;
	}
	_putchar('\n');
}
