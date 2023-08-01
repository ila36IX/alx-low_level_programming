#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: Matrix of arrays
 * @size: SIze of the matrix
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int diag1 = 0, diag2 = 0, i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diag1 += a[i * size + j];
			}

			if (i + j == size - 1)
			{
				diag2 += a[i * size + j];
			}
		}
	}
	printf("%d, %d\n", diag1, diag2);
}
