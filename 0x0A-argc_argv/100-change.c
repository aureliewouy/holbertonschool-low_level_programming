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
	int money;
	int i = 0;
	int change;
	int nb = 0;

	if (argc == 2)
	{
		money = atoi(argv[1]);
		change = money - coin[i];
		if (money < 0)
		{
			printf("0\n");
		}
		while (coin[i])
		{
			if (change == 0)
			{
				nb = nb + 1;
				printf("nb : %d\n", nb);
				break;
			}
			if (change < 0)
			{
				change = money - coin[i];
			}
			while (change > 0)
			{
				change = change - coin[i];
				printf("change : %d\n", change);
				printf("nb : %d\n", nb);
				nb++;
			}
			i++;
		}
		printf("%d\n", nb);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
