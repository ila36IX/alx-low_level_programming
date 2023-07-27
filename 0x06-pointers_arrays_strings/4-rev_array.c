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
	int arr [100];
	int i;

	for (i = 0; i < n; i++)
	{
		arr[i] = a[i];
	}
	for(i = 0; i < n; i++)
	{
		a[i] = arr[n - i];
	}
}
