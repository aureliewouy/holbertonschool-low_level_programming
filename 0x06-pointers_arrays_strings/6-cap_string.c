#include "holberton.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s : the string
 *
 * Return: the string capitalizes
 */

char *cap_string(char *s)
{
	int i = 0, j;
	char separator[] = {44, 59, 46, 33, 63, 40, 41, 123, 125, '\n', 32};

	while (s[i] != '\0')
	{
		if (s[i] == '\t')
			s[i] = 32;
		j = 0;
		while (s[i] != separator[j])
		{
			j++;
		}
		if (j < 13)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= 32;
			}
		}
		i++;
	}
	return (s);
}
