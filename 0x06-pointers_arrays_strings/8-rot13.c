#include "holberton.h"

/**
 * *rot13 - encode a string unsing rot13
 * @s : the string to encore
 *
 * Return: the string
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			s[i] += 13;
                        if (s[i] >= 90)
                                s[i] -= 26;
		}
		if (s[i] >= 97 && s[i] <= 122)
                {
                        s[i] += 13;
                        if (s[i] >= 122)
                                s[i] -= 26;
                }
		i++;
	}
	return (s);
}
