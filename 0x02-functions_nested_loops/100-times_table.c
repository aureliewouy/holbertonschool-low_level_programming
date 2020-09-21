#include "holberton.h"

/**
 * print_times_table - Print the alphabet.
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
	long int compteur = 0;
	long int num = 0;
	long int nn = 0;
	long int resultat;
	if ( n <= 15 && n > 0)
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
					}
				}
				if (resultat < 10)
				{
					_putchar((resultat) + '0');
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
