#include "holberton.h"

/**
 * print_array - print numbers of an array
 * @a : the array
 * @n : the number of elements
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if ((i + 1) == n)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
