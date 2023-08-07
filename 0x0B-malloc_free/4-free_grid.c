#include "main.h"

/**
 * free_grid - Frees a 2D grid previously allocated with alloc_grid.
 * @grid: Pointer to the 2D grid to free.
 * @height: Height of grid.
 */
void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	
	free(grid);
}
