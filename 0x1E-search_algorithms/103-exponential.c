#include "search_algos.h"

/**
 * min - find the less integer
 *
 * @d1: first integer to compare
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

/**
 * searching_in_array - prints the current searching array items
 *
 * @array: Sorted array
 * @l: starting position
 * @r: Ending position
 * Return: Nothing
 */
void searching_in_array(int *array, int l, int r)
{
	int i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d%s", array[i], i == r ? "\n" : ", ");
	}
}

/**
 * binary_search - Search for an element in sorted array
 * using binary_search
 *
 * @array: A sorted array
 * @size: The size of the array
 * @value: The value to search for
 * Return: Index which the value is located in the array
 * Or -1 if array if NULL or value not exists
 */
int binary_search(int *array, size_t size, int value)
{
	int l, r, m;

	if (!array)
		return (-1);

	l = 0;
	r = size - 1;
	while (r >= l)
	{
		searching_in_array(array, l, r);
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
