#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments
 *
 * @ac: Number of argrguments
 * @av: Array of string
 * Return: Pointer to th enw string or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j = 0, b = 0,str_length = 0;
	char *big_str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			str_length++;
			j++;
		}
		j = 0;
	}

	big_str = malloc(sizeof(char) * str_length + ac);
	
	if (big_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			big_str[b + j] = av[i][j];
			j++;
		}
		b += j;
		big_str[b] = '\n';
		b++;
		j = 0;
	}

	big_str[str_length + ac] = '\0';

	return (big_str);
}
