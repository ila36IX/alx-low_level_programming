#include "search_algos.h"

/**
 * recursion_binary - Implementing binary search using recursion
 *
 * @array: A sorted array
 * @size: The size of the array
 * @low: first index current search will start from
 * @high: last index current search will end by
 * @value: The value to search for
 * Return: Index which the value is located in the array
 * Or -1 if array if NULL or value not exists
 */
int recursion_binary(int *array, size_t size, size_t low,
		     size_t high, int value)
{
	size_t m = (low + high) / 2;

	if (low > high)
		return (-1);

	if (array[low] == value)
		return (low);

	searching_in_array(array, low, high);

	if (array[m] < value)
		return (recursion_binary(array, size, m + 1, high, value));
	else if (array[m] > value)
		return (recursion_binary(array, size, low, m - 1, value));
	else if (array[m - 1] == value)
		return (recursion_binary(array, size, low, m + 1, value));
	else
		return (m);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *
 * @array: A sorted array
 * @size: The size of the array
 * @value: The value to search for
 * Return: Index which the value is first located in the array
 * Or -1 if array if NULL or value not exists
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (recursion_binary(array, size, 0, size - 1, value));
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
