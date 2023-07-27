#include "main.h"

/**
 * _strncpy - Copy a part of string
 * @dest: The string that will part of it will be replaced
 * @src: Will be in starting of dest
 * @n: The length of src that will be replaced
 *
 * Return: Nothing
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for (i = 0; i < n; i++)
	{
		if (i < j)
		{
			*(dest + i) = *(src + i);
		}
		else
		{
			*(dest + i) = '\0';
		}
	}
	return (dest);
}
