#include "holberton.h"

/**
 * rev_string - print a string in reverse
 * @s : the string that we will print in reverse
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[i])
	{
		i++;
	}
	j = i - 1;
	i = 0;
	while (i<j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i++;
		j--;
	}
}
