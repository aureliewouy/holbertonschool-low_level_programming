#include "variadic_functions.h"

/**
 * sum_them_all - sum all its parameters
 *
 * @n: the numbers to sum
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
