#include "main.h"

/**
 * array_range - Creates an array of integers
 *
 * @min: Start counting from (included)
 * @max: The last elemnt in array (included)
 * Return: Pointer to the newly created array
 * or NULL if min > max, or if it fails.
 */
int *array_range(int min, int max)
{
	int i, j = 0;
	int *array_ptr = NULL;

	if (min > max)
		return (NULL);

	array_ptr = malloc(sizeof(int) * (max - min + 1));

	if (array_ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		array_ptr[j] = i;
		j++;
	}

	return (array_ptr);
}
