#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid prev allocated by alloc_grid
 * @grid: double pointer to the 2D array
 * @height: height of grid (rows)
 *
 * Return: nothing (void)
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
