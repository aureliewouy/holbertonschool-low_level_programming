#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: the separator
 * @n: the numbers
 *
 * Return: the numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n ; i++)
	{
		printf("%i", va_arg(valist, int));
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	va_end(valist);
	printf("\n");
}
