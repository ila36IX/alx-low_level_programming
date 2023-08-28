#include "main.h"

/**
 * _calloc - Allocates memory for an array
 *
 * @nmemb: Number of memory blocks
 * @size: Many bytes each
 * Return: Pointer to the allocated memory or
 * NULL if nmemb or size is 0, or if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memp = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memp = malloc(size * nmemb);

	if (memp == NULL)
		return (NULL);

	for (i = 0 ; i < nmemb * size; i++)
	{
		memp[i] = 0;
	}
	return (memp);

}
