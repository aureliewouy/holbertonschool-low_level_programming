#include "holberton.h"

/**
 * *leet - Encide a string into 1337
 * @s : the script to encode
 *
 * Return : the string encoded into 1337
 */

char *leet(char *s)
{
	int i = 0, j;
	char letters[] = "aeotlAEOTL";
	char leet[] = "4307143071";

	while (s[i] != '\0')
	{
		j = 0;
		while (letters[j] != s[i])
		{
			j++;
		}
		if (j < 11)
		{
		s[i] = leet[j];
		}
		i++;
	}
	return (s);
}
