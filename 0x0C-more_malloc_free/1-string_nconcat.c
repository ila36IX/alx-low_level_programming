#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the first string
 * @s2: Secconde string(part of it as n equal)
 * @n: Part length of s2
 * Return: Pointer to the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0;
	char *new_str = NULL;

	if (s1 != NULL)
	{
		while (*(s1 + s1_len))
			s1_len++;
	}
	if (s2 != NULL)
	{
		while (*(s2 + s2_len))
			s2_len++;
	}


	if (s2_len <= n)
		n = s2_len;

	new_str = malloc(sizeof(char) * (s1_len + n + 1));

	if (new_str == NULL)
		return (NULL);

	new_str[s1_len + n + 1] = '\0';

	while (n--)
	{
		new_str[s1_len + n] = s2[n];

	}

	while (s1_len--)
		new_str[s1_len] = s1[s1_len];


	return (new_str);


}
