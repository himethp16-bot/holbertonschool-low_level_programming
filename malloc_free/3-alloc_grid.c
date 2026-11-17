#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates a 2-dimensional array of integers
 * @width: width of grid (columns)
 * @height: height of grid (rows)
 *
 * Return: pointer to the 2D array, or NULL on failure or invalid dimensions
 */

int **alloc_grid(int width, int height)
{	
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (grid);
}
