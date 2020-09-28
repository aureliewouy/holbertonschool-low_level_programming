#include "holberton.h"

/**
 * swap_int - swap two value
 * @a : the first value to swap
 * @b : the secon value to swap
 *
 * Return : Always 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
