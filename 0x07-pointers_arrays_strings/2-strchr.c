#include "holberton.h"

/**
 * *_strchr - Locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: the character of null if not found
 */

char *_strchr(char *s, char c)
{
	char *p = s;
	int i = 0;

	while (*s != c)
	{
		s++;
		i++;
	}
	if (*s == c)
	{
		return (p + i);
	}
	else
	{
		return (0);
	}
}
