#include "main.h"
#include <stdlib.h>

/**
 * create_array - array of specific value of charachters
 *
 * @size: size of the array
 * @c: Specific carachter
 * Return: Pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *matrix;

	matrix = malloc(sizeof(*matrix) * size);
	if (matrix == NULL)
		return (NULL);

	while (size--)
		matrix[size] = c;
	return (matrix);
}
