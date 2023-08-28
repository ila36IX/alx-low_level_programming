#include <stdio.h>
#include "main.h"
#include <stdlib.h>
char **array_of_words(char *str, char **array);

/**
 * strtow - Splits a string into words
 *
 * @str: String
 * Return: Pointer to an array of strings (words)
 * or NULL if it fails.
 */
char **strtow(char *str)
{
	int i, j = 0, ind, m;
	char **words;

	if (*str >= 33 && *str <= 126)
		j++;
	for (i = 0; *(str + i); i++)
		if (*(str + i) == ' ' &&  *(str + i + 1) <= 126 && *(str + i + 1) >= 33)
			j++;
	if (str == NULL || j == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (j + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (*(str + i) >= 33 && *(str + i) <= 126)
		{
			for (m = i; *(str + m) != '\0' && *(str + m) != ' '; m++)
				;
			words[j] = malloc(sizeof(char) * (m - i + 1));
			if (words[j] == NULL)
				return (NULL);
			for (m = i, ind = 0; *(str + m) != '\0' && *(str + m) != ' '; m++, ind++)
				words[j][ind] = *(str + m);
			words[j][ind] = '\0';

			i = m - 1, j++;
		}
	}
	words[j] = NULL;

	return (words);

}
