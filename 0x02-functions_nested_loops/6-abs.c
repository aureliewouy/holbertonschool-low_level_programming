#include "holberton.h"

/**
 * _abs - Print the alphabet.
 *@n: The number to absolute.
 *
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -(n);
		return (n);
	}
	else
	{
		return (n);
	}
}
