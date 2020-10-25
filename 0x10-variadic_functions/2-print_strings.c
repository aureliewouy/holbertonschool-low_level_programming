#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *
 * @separator: the separator
 * @n: the numbers of strings
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	char *s;

	if (n == 0)
		return;

	va_start(valist, n);
	while (i < n)
	{
		s = va_arg(valist, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(valist);
}
