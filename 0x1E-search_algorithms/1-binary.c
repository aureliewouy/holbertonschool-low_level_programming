#include "search_algos.h"

/**
 * binary_search -  Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t l = 0;
	size_t r = size - 1;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		i = l;
		while (i <= r)
		{
			printf("%i", array[i]);
			if (i < r)
				printf(", ");
			i++;
		}
		printf("\n");
		mid = l + (r - l) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			l = mid + 1;

		if (array[mid] > value)
			r = mid - 1;
	}
	return (-1);
}
