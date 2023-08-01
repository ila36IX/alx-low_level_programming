#include "main.h"

/**
 * _memset - Fills the memory with a constant byte
 * @s: Memory pointer
 * @b: The constant
 * @n: Meny bytes that will be filled
 *
 * Return: Pointer the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
