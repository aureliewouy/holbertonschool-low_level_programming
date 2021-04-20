#include "search_algos.h"

/**
 * linear_search -  Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: the size of the array
 * @value: is the value to search for
 * Return: first index where value is located
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		  return (i);
	}
	return (-1);
}
