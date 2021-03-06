#include "holberton.h"
#include <stdio.h>
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
	int coin[] = {25, 10, 5, 2, 1};
	int money, i = 0, change, nb = 0;

	if (argc == 2)
	{
		money = atoi(argv[1]);
		change = money - coin[i];
		if (money < 0)
		{
			nb = 0;
		}
		while (coin[i])
		{
			if (change == 0)
			{
				nb = nb + 1;
				break;
			}
			if (change < 0)
			{
				change = money - coin[i];
			}
			while (change > 0)
			{
				change = change - coin[i];
				nb++;
			}
			i++;
		}
		printf("%d\n", nb);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
