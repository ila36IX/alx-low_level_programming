#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of prefix substring
 * @s: Initail string
 * @accept: String that will be count based on its consisting chars
 *
 * Return: Number of bytes in the initial segment of s which consist
 *	only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;
	int found = 1;

	while (s[i] && found)
	{
		found = 0;
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				found =  1;
				break;
			}
			j++;
		}

		if (!found)
		{
			return (i);
		}

		i++;
	}
	return ('\0');
}
