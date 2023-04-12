#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: A pointer to two dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, x;
	int area = width * height;

	if (area <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (x = 0; x < width; x++)
			grid[i][x] = 0;
	return (grid);
}
