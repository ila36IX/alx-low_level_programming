#include "search_algos.h"

/**
 * linear_search - Sequentially checks each element of the list
 * until a match is found or the whole list has been searched.
 *
 * @array: Array of integers
 * @size: Size of the array
 * @value: The value to search for
 * Return: Index where value is located
 * Or -1 if array is NULL or value is not peresent
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	index = 0;
	if (!array)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
