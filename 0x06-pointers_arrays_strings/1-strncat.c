#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings
 *
 * @dest: The string that will be expanded
 *
 * @src: The string that part of it will be added to dest
 *
 * @n: The length of the part that will be added to dest
 *
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		*(dest + i + j) = *(src + j);
		if (*(src + j) == '\0')
		{
			break;
		}
	}
	return (dest);
}
