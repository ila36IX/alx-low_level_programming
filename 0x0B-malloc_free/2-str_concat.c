#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 *
 * @str: String
 * Return: pointer to newly duplicate string
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;

	if (str == NULL)
		return (NULL);
	
	while (*(str + i))
		i++;

	p = malloc(sizeof(*str) * (i + 1));

	if (!p)
		return (NULL);

	p[i] = '\0';

	while (i--)
		p[i] = *(str + i);

	return (p);
}

/**
 * str_concat - Concatenate two strings
 *
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to the newly allocated string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int s1_len = 0;
	int s2_len = 0;

	if (s1 == NULL)
		return (_strdup(s2));

	else if (s2 == NULL)
		return (_strdup(s1));

	else if (s1 == NULL && s2 == NULL)
		return (_strdup(""));

	while (*(s1 + s1_len))
		s1_len++;

	while (*(s2 + s2_len))
		s2_len++;

	p = malloc(sizeof(*s1) * (s1_len + s2_len - 1));

	if (p == NULL)
		return (NULL);

	p[s1_len + s2_len - 1] = '\0';

	while (s2_len--)
		p[s1_len + s2_len] = s2[s2_len];

	while (s1_len--)
		p[s1_len] = s1[s1_len];

	return (p);
}
