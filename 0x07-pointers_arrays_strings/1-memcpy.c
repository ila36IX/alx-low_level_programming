#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Mermory that will be filled
 * @src: Memory that will be copied from
 * @n: Many bytes that will be copies
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
