#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 *
 * @array: The array of integers
 * @size: Length of the array
 * @cmp: Pointer to function that will compare based
 * on it.
 * Return: index of the first element for which the
 * cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
