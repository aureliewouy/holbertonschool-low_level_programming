#include "holberton.h"

/**
 * free_grind - free a 2 dimensional grind
 * @grind: the grind
 * @height: the height
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
