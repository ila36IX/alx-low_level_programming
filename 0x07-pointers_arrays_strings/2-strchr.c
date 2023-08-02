#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate a character of a string
 * @s: String
 * @c: Character
 *
 * Return: pointer to the first occurrence of
 * the character c in the string s, or NULL if
 * the character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	if (c == '\0')
	{
		return (s);
	}
	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
