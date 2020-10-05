#include "holberton.h"
#include <stdio.h>

/**
 * *_strstr - Locates a substring
 * @haystack: the string
 * @needle: first occurence of the substring
 *
 * Return: a pointer to the begining of null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (start);
		haystack = start + 1;
	}
	return (NULL);
}
