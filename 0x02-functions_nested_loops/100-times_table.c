#include "holberton.h"

/**
 * print_times_table - Print the alphabet.
 * @n: this is the number to print
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
	long int compteur = 0, num = 0, nn = 0, resultat;

	if (n <= 15 && n > 0)
	{
		while (nn <= n)
		{
			while (compteur <= n)
			{
				resultat = num * compteur;
				if (compteur != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (resultat < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (resultat < 100)
					{
						_putchar(' ');
					}
				}
				if (resultat < 10)
				{
					_putchar((resultat) + '0');
				}
				else if (resultat > 99)
				{
					_putchar((resultat / 100) + '0');
					_putchar(((resultat / 10) % 10) + '0');
					_putchar((resultat % 10) + '0');
				}
				else
				{
					_putchar((resultat / 10) + '0');
					_putchar((resultat % 10) + '0');
				}
				compteur++;
			}
			_putchar('\n');
			nn++;
			num++;
			compteur = 0;
		}
	}
}
