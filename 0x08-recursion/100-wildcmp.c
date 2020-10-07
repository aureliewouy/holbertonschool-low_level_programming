#include "holberton.h"

/**
 * wildcmp - Compare two string
 * @s1: the first string
 * @s2: the secund string
 *
 * Return: 1 if its identital, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1)
	{
		if (*s1 != *s2)
		{
			return (0);
		}
	      	if (*s2 == '*')
		{
			return (*s1);
			}*/
		if (*s2 == *s1)
		{
			return(1);
		}
	}
	return (wildcmp(s1 + 1, s2 + 1));
}
