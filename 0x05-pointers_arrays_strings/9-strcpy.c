#include "holberton.h"

/**
 * *strcpy - make a copie like strcy function
 * @dest : the buffer
 * @src : string pointed by
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
/*
	for (i = 0; src[i] != '\0'; i++)
	{
		*dest++;
	}*/
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	return dest;
}
