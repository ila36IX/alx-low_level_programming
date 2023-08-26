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

	if (str == NULL || *str == '\0')
		return (NULL);

	while (*(str + i))
		i++;

	p = malloc(sizeof(*str) * i);

	if (!p)
		return (NULL);

	p[i] = '\0';

	while (i--)
		p[i] = *(str + i);

	return (p);
}
