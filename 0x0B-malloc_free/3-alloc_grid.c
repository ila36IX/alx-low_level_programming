#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - 2 dimensional array of integers
 *
 * @width: Horizontal size
 * @height: Vertical size
 * Return: Pointer to matrix
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **) malloc(sizeof(**p) * height);

	for (i = 0; i < height; i++)
	{
		p[i] = (int *) malloc(sizeof (int) * width);
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}

	return (p);
		
}
