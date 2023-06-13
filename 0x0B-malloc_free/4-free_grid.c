#include "main.h"

/**
 * free_grid - a function that frees a two dimensional
 * grid previously created by alloc_grid function.
 * @grid: pointer to 2D grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	if (height != 0 && grid != NULL)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
