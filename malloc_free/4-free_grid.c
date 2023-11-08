#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that free a 2 dimensional grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 **/
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
