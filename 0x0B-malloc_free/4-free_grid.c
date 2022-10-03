#include "main.h"

/**
 * free_grid - allocates a grid, makes and free's space
 * @grid: takes in width of grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i == 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
