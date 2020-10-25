#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct Format - find the format
 * @c: the character
 * @f: the function
 *
 * Description: with the format finds the right function for it
 */
typedef struct Format
{
	char c;
	void (*f)(va_list);
} Format;
void print_all(const char * const format, ...);
#endif
