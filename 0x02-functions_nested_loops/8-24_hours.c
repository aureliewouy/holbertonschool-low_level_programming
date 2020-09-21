#include "holberton.h"

/**
 * jack_bauer - Print the alphabet.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	long int min = 0;
	long int hour = 0;
	while (hour < 24)
	{
		while (min < 60)
		{
			_putchar((hour /10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			min++;
			_putchar('\n');
		}
		min = 0;
		hour++;
	}
}
