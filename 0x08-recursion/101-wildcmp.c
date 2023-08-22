#include "main.h"

/**
 * wildcmp - Compare two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == '\0' || *s2 == '\0')
		return (0);

	if (*s2 == '*')
		return  (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
