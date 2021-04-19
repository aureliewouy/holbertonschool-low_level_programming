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
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (array[i]);
	}
	return (-1);
}
