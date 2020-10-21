#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - executes a function on each element
 * @size: the size
 * @array: the array
 * @action: the function callback
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size <= 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
