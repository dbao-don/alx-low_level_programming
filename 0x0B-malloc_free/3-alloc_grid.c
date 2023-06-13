#include "main.h"

/**
 * alloc_grid - a function that returns a pointer
 * to a two dimensional array of integers.
 * @width: length of the row
 * @height: how many rows
 *
 * Return: Pointer to 2D array(on success) or NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int grid_row, grid_column;

	/* check if width or height is zero */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* use malloc to assign size of grid rows */
	grid = malloc(height * sizeof(int));

	/* if malloc fails return null */
	if (grid == NULL)
		return (NULL);

	/* use malloc to assign size of grid column */
	for (grid_row = 0; grid_row < height; grid_row++)
	{
		grid[grid_row] = malloc(width * sizeof(int));
		/* free grid if malloc fails */
		if (grid[grid_row] == NULL)
		{
			for (grid_column = 0; grid_column < grid_row; grid_column++)
				free(grid[grid_column]);
			free(grid);

			return (NULL);
		}
	}

	/* populate the grid */
	for (grid_row = 0; grid_row < height; grid_row++)
		for (grid_column = 0; grid_column < width; grid_column++)
			grid[grid_row][grid_column] = 0;

	return (grid);
}
