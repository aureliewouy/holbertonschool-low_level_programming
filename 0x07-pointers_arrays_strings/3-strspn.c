#include "holberton.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: the string
 * @accept: the string acept
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (!accept[j])
		{
			return (i);
		}
		i++;
	}
	return (i);
}
