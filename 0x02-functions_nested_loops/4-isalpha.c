#include "holberton.h"
/**
 * _isalpha - check the code for Holberton School students.
 *@c: is the letter that we test.
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
