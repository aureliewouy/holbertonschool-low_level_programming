#include "holberton.h"
/**
 * _sqrt - the square
 * @n: the number
 * @sq: the square
 *
 * Return: the square number
 */

int _sqrt(int n, int sq)
{
	if (sq * sq > n)
		return (-1);
	else if (sq * sq == n)
		return (sq);
	else
		return (_sqrt(n, sq + 1));
}

/**
 * _sqrt_recursion - the natural square root
 * @n: the number
 *
 * Return: the natural square
 */


int _sqrt_recursion(int n)
{

	return (_sqrt(n, 0));
}
