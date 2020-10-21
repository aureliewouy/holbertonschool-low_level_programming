#include "3-calc.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * @argc: the number of elements
 * @argv: the array
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int result;
	int a, b;

	if (argc < 2)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);
	return (0);
}
