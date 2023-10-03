#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - it returns a pointer to a 2
 * dimensional array.
 * @width: one of the arrays
 * @height: the other array
 * Return: a pointer, else NULL
 *
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
