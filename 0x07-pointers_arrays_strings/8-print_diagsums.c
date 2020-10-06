#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the two diagonals of a square matrix
 * @a: the array
 * @size: the size
 *
 * Return: nothing.
 */

void print_diagsums(int *a, int size)
{
	int s2 = 0;
	int i;
	int s1 = 0;

	for (i = 0; i < (size * size); i += (size + 1))
	{
		s1 += a[i];
	}
	for (i = 0; i < (size * size); i += (size - 1))
	{
		if (i < (size * size) - 1)
			s2 += a[i];
	}
	printf("%d, %d\n", s1, s2);
}
