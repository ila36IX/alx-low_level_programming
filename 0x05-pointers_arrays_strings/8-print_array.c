#include "main.h"
#include <stdio.h>

/**
 * print_array - Print a spesefic number of an array elements
 *
 * @a: array
 *
 * @n: Number of the printed integers
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int j = 0;
	if (n > 0)
	{
		for (j = 0; j < n - 1; j++)
		{
			printf("%d, ", a[j]);
		}
		printf("%d\n",a[n - 1]);
	}
}
