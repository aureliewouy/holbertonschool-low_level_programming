#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, x;
	size_t m = 0;

	if (!array)
		return (-1);
	while (array[m] <= value - 1 && m < size)
	{
		i = m;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		m += sqrt(size);
		if (m > size - 1)
		break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i, m);
	for (x = i; x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}

	return (-1);
}
