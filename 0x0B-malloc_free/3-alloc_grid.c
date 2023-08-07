#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D grid using an alternate implementation.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the created grid.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int size;
 	 int i, j;
	if (width <= 0 || height <= 0)
		return (NULL);

	size = width * height * sizeof(int);
	
	grid = malloc(size);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)grid + i * width;
	}

	for (i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
