#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *argstostr(int ac, char **av)
{
	int len, i, j, k = 0;
	char *s;
	if ( ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);
	printf("len : %d", len);
	s = malloc(len + 1 * sizeof(char));
	if (s == NULL)
		return NULL;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < len - 1; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
