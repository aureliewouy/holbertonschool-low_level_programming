#include "holberton.h"

/**
 * *rot13 - encode a string unsing rot13
 * @s : the string to encore
 *
 * Return: the string
 */

char *rot13(char *s)
{
	int i = 0, j;
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		j = 0;
		while (s[i] != abc[j])
			j++;
		if (j < 52)
			s[i] = rot[j];
		i++;
	}
	return (s);
}
