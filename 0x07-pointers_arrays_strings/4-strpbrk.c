#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Function locates the first occurrence in the string s
 * @s: String
 * @accept: Set of bytes
 *
 * Return: pointer to the byte in s that matches one of the bytes
 *	in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
