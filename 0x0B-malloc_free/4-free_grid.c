#include "main.h"
#include <stdlib.h>

/**
 * free_grid - it frees up space
 * from a 2d array
 * @grid: the 2D array
 * @height: the height
 * Return: Success
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
