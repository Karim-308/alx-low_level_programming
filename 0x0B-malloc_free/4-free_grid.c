#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 *@grid: rows of mat
 *@height: columns of str
 * Return: a pointer to a 2 dimensional array of integers or null
 */
void free_grid(int **grid, int height)
{
	int j;
	int *p;

	for (j = 0; j < height; j++)
	{
		p = grid[j];
		free(p);
	}
	free(grid);
}
