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
	char separator[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		j = 0;
		if (s[i] == separator[1])
			s[i] = 32;
		while (s[i] != separator[j] && j < 13)
		{
			j++;
		}
		if (j < 13)
		{
			if (i == 0)
			{
				s[i + 1] -= 32;
			}
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= 32;
			}
		}
		i++;
	}
	return (s);
}
