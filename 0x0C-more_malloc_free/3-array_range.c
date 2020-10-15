#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - array of integers
 * @min: the minimum
 * @max: the maximum value
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int i = min, k = 0;

	if (min > max)
		return (NULL);
	p = malloc((1 + max - min) * sizeof(*p));
	if (p == NULL)
		return (NULL);
	while (i <= max)
	{
		p[k] = i;
		i++;
		k++;
	}
	return (p);
}
