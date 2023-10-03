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

	grid = (int **)malloc(sizeof(int *) *  height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
			return (NULL);

	}
	for (i = 0; i < height; i++)
		for (; j < width; j++)
			grid[i][j] = 0;


	return (grid);
}
