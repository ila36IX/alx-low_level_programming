#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid
 *
 * @grid: Pointer to 2 dimensional array
 * @height: Hozisontal size of array
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
