#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2 dimensional grid previously created
 * @grid: grid to free up
 * @height: the height of the grid
 * Return: void 
 */
void free_grid(int **grid, int height)
{
	int gd;

	for (gd = 0; gd < height; gd++)
		free(grid[gd]);
	free(grid);
}
