#include "search_algos.h"

/**
 * min - find the less integer
 *
 * @d1: first integer
 * @d2: second integer
 * Return: The min integer
 */
int min(int d1, int d2)
{
	return (d1 < d2 ? d1 : d2);
}

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 *
 * @array: array to search in
 * @size: Length of the array
 * @value: The value to search for
 * Return: Position of the value if found
 * Or -1 if not found, or list is empty
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, end_pos;
	int pos;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;
	while (i < size - 1 && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i *= 2;
	}
	end_pos = min(i, size - 1);
	printf("Value found between indexes [%lu] and [%ld]\n", i / 2, end_pos);
	pos = binary_search(&array[i / 2], end_pos - i / 2 + 1, value);
	if (pos == -1)
		return (-1);
	return (pos + i / 2);
}
