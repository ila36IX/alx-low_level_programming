#include "search_algos.h"

int recursion_binary(int *array, size_t size, size_t low, size_t high, int value)
{
	size_t m = (low + high) / 2;

	if (low > high)
		return (-1);

	if (array[low] == value)
		return low;

	searching_in_array(array, low, high);

	if (array[m] < value)
		return recursion_binary(array, size, m + 1, high, value);
	else if (array[m] > value)
		return recursion_binary(array, size, low, m - 1, value);
	else if (array[m - 1] == value)
		return recursion_binary(array, size, low, m + 1, value);
	else
		return (m);
}

/**/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return recursion_binary(array, size, 0, size - 1, value);
}

