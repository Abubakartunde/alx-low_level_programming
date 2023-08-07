#include "main.h"
#include <stdlib.h>


/**
 * free_grid - A function that frees a 2D array of ints previously
 * allocated by malloc_grid function
 * @grid: An input array of integers to free
 * @height: The height of grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
