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

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (0);
	}
}
