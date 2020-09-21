#include "holberton.h"

/**
 * times_table - Print the alphabet.
 *
 * Return: Always 0.
 */

void times_table(void)
{
	long int n = 0;
	long int compteur = 0;
	long int nn = 0;
	long int resultat;

	while (nn < 10)
	{
		while (compteur < 10)
		{
			resultat = n * compteur;
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
	n++;
	compteur = 0;
	}
}
