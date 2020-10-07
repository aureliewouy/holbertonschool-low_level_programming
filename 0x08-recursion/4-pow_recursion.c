#include "holberton.h"

/**
 * _pow_recursion - the value of y raised to the power of y
 * @x: the value
 * @y: the power
 *
 * Return: the value of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
