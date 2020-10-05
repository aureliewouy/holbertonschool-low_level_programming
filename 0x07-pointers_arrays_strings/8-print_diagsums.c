#include "holberton.h"

/**
 * print_diagsums - Print the sum of the two diagonals of a square matrix
 * @a: the array
 * @size: the size
 *
 * Return: nothing.
 */

void print_diagsums(int *a, int size)
{
	int s1;
	int s2;
	int nb;
	int i = 0;

	nb = size * size;
	while (i < nb)
	{
		if (i % (size + 1) == 0)
		{
			s1 += a[i];
		}
		if (i % (size - 1) == 0 && i != (nb - 1))
		{
			s2 += a[i];
		}
		i++;
	}
		printf("%d, %d\n", s1, s2);
}
