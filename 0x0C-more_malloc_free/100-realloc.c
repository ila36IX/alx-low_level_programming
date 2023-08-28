#include "main.h"

/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to the memory previously allocated
 * @old_size: size of the allocated space for ptr
 * @new_size: size of the new memory block
 * Return: Pointer to new allocated memory 
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
		new_ptr = malloc(new_size);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		free(ptr);
		new_ptr = malloc(new_size);
	}
	return (new_ptr);
}
