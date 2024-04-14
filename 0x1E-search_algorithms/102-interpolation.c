#include "search_algos.h"

/**
 * interpolation_search -  searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Length of the array
 * @value: The value to search for
 * Return:  the first index where value is located
 * Or -1 if not found or when array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{

	size_t low, high, pos;

	if (!array)
		return (-1);

	low = 0, high = size - 1;
	while (low <= high)
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
		else
			return (pos);
	}
	return (-1);
}
