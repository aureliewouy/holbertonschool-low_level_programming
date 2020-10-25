#include "variadic_functions.h"

/**
 * print_c - print c charater
 * @list: a list
 *
 * Return: Nothing
 */

void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_i - print integer
 *
 * @list: list of types of arguments
 *
 * Return: Nothing
 */
void print_i(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_f - prints float
 *
 * @list: list of types of arguments
 *
 * Return: Nothing
 */

void print_f(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_s - prints string
 *
 * @list: list of types of arguments
 *
 * Return: Nothing
 */

void print_s(va_list list)
{
	printf("%s", va_arg(list, char *));
}

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, j;
	char *sep = ", ";
	Format formats[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'\0', NULL}
	};

	va_start(valist, format);

	while (format[i] != '\0' && format)
	{
		j = 0;
		while (formats[j].c != '\0')
		{
			if (format[i] == formats[j].c)
			{
				formats[j].f(valist);
				if (j != 3)
					printf("%s", sep);
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
