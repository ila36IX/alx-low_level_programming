#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: The array
 * @n: Array length
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int flip_flop;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		flip_flop = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = flip_flop;
	}
}
