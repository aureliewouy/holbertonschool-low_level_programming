#include "holberton.h"

/**
 * main - argc and  agrv
 * @argc: the size of argv array
 * @argv: an array of size argc
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
