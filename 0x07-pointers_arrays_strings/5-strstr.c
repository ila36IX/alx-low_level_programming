#include "main.h"
#include <stddef.h>

/**
 * _strstr - Function that locates a substring
 * @haystack: The absulate string
 * @needle: Substring
 *
 * Return:  pointer to the beginning of the located
 * substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	int needlength = 0;

	while (needle[needlength])
	{
		needlength++;
	}
	
	while (haystack[i])
	{
		j = 0;

		if (haystack[i] == needle[0])
		{
			for (j = 1; j <= needlength; j++)
			{
				if (j == needlength - 1)
				{
					return (haystack + i);
				}
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
		}
		i++;
	}
	return (NULL);
}
