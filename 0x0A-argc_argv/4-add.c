#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - argc and  agrv
 * @argc: the size of argv array
 * @argv: an array of size argc
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int add = 0;
	int count = 1;


	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		while (count < argc)
		{
			if (isdigit(*argv[count]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			add = add + atoi(argv[count]);
			count++;
		}
		printf("%d\n", add);
	}
	return (0);
}
