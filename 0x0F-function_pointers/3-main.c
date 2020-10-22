#include "3-calc.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code for Holberton School students.
 * @argc: the number of elements
 * @argv: the array
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *c;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = argv[2];
	op = c[0];
	if ((op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
	    || strlen(c) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0 && (op == '/' || op == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(c)(a, b));
	return (0);
}
