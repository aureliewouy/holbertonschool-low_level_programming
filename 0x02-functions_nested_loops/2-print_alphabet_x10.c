#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int compteur = 0;

	while (compteur < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		compteur++;
		_putchar('\n');
	}
	return;

}
