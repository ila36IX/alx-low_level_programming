#include "search_algos.h"

int interpolation_search(int *array, size_t size, int value)
{

	size_t low, high, pos;
	
	if (!array)
		return (-1);

	low = 0, high = size - 1;
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]", pos, array[pos]);
		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
		else
			return (pos);
	}
	return (-1);
}
