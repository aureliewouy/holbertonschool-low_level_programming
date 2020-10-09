#include "holberton.h"
#include <stdlib.h>

/**
 * main - argc and  agrv
 * @argc: the size of argv array
 * @argv: an array of size argc
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int mul = 1;
	int count = 1;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		while (count < argc)
		{
			mul = mul * atoi(argv[count]);
			count++;
		}
		printf("%d\n", mul);
	}
	return (0);
}
