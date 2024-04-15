#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Length of the array
 * @value: The value to search for
 * Return:  the first index where value is located
 * Or -1 if not found or when array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, l = 0, r = 0, block_size;

	if (!array)
		return (-1);

	block_size = sqrt(size);
	while (r < size)
	{
		printf("Value checked array[%ld] = [%d]\n", r, array[r]);
		if (array[r] > value)
			break;
		l = r, r += block_size;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", l, r);
	for (i = l; i <= r && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
