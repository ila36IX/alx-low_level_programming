#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: The string that will expand
 *
 * @src: The string that will append in the ind of dest
 *
 * Return: Pointer to dest variable
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		*(dest + i + j) = *(src + j);
		j++;
	}

	*(dest + i + j) = '\0';
	return (dest);
}
