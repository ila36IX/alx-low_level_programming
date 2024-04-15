#include "search_algos.h"

/**
 * __searching_in_array - prints the current searching array items
 *
 * @array: Sorted array
 * @l: starting position
 * @r: Ending position
 * Return: Nothing
 */
void __searching_in_array(int *array, int l, int r)
{
	int i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d%s", array[i], i == r ? "\n" : ", ");
	}
}

/**
 * recursion_binary - Implementing binary search using recursion
 *
 * @array: A sorted array
 * @low: first index current search will start from
 * @high: last index current search will end by
 * @value: The value to search for
 * Return: Index which the value is located in the array
 * Or -1 if array if NULL or value not exists
 */
int recursion_binary(int *array, size_t low, size_t high, int value)
{
	size_t m = (low + high) / 2;

	if (low > high)
		return (-1);

	__searching_in_array(array, low, high);
	if (array[low] == value)
		return (low);

	if (array[m] < value)
		return (recursion_binary(array, m + 1, high, value));
	else if (array[m] > value)
		return (recursion_binary(array, low, m, value));
	else if (array[m - 1] == value)
		return (recursion_binary(array, low, m, value));
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

	return (recursion_binary(array, 0, size - 1, value));
}
