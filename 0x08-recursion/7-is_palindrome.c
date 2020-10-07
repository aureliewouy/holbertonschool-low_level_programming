#include "holberton.h"

/**
 * _strlen - the lenght of a string
 * @s: the string
 *
 * Return: the lenght of a string
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}

/**
 * _palindrome - checking if its palindrome
 * @str: the string
 * @s: the start of the string
 * @e: the end
 *
 * Return: 1 if its palindrome
 */

int _palindrome(char str[], int s, int e)
{
	if (s == e)
		return (1);
	if (str[s] != str[e])
		return (0);
	if (s < e + 1)
		return (_palindrome(str, s + 1, e - 1));
	return (1);
}


/**
 * is_palindrome - find if a string is a palindrome
 * @s: the string
 *
 * Return: 1 if its a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int lenght = _strlen(s);

	if (lenght == 0)
	{
		return (1);
	}
	return (_palindrome(s, 0, lenght - 1));
}
