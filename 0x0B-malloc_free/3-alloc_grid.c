#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		fprintf(stderr, "failed to allocate memory\n");
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			fprintf(stderr, "failed to allocate memory\n");
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}		for (j = 1; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

/**
 * freeGrid - frees the memory allocated
 * @grid: a pointer to the grid
 * @height: height of the grid
 *
 * Return: nothing
 */
void freeGrid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
