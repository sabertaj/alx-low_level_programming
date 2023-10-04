#include "main.h"

/**
 * free_grid - a function 2 frees 2d array
 * @grid: the 2 dimensional grid
 * @height: the height of the grid
 * Description: mem fre
 * Return: NOTHING
 *
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
