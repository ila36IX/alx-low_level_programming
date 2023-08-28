#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: The amount of memory needed
 * Return: Pointer to this memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
