#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - main point
 *@width: rows of matx
 *@height: columns of str
 * Return: a pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int **matx;
	int i;
	int j;
	int l;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	matx = (int **)malloc(height * sizeof(int *));
	if (matx == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(matx + i) = (int *)malloc(width * sizeof(int));
		if (*(matx + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = matx[i];
				free(p);
			}
			free(matx);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (j = 0; j < width; j++)
		{
			matx[l][j] = 0;
		}
	}
	return (matx);
}
