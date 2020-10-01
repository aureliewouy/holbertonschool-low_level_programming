#include "holberton.h"

/**
 * reverse_array - Reverse the content of an array of integers
 * @a : the array
 * @n : the number of elements of the array
 *
 * Return : nothing.
 */

void reverse_array(int *a, int n)
{
	int end = n - 1, start = 0, temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		end--;
		start++;
	}
}
