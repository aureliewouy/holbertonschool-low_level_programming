#include "holberton.h"

/**
 * factorial - The factorial of a given number
 * @n: the number
 *
 * Return: The factioral int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
