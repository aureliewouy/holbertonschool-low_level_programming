#include "holberton.h"
/**
 * _prime - test if its prime
 * @n: the number
 * @i: the index
 *
 * Return: if its prime number
 */

int _prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}

	if (i ==  n - 1)
	{
		return (1);
	}
	return (_prime(n, i + 1));
}

/**
 * is_prime_number - if the interger is a prime number
 * @n: the number
 *
 * Return: 1 if is a prime number otherwise 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
