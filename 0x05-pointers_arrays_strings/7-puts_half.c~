#include "main.h"
#include <stdio.h>

/**
 * puts_half - Print the second hald of a string
 *
 * @str: The string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int j;
	int odd = 0;

	if (*str)
	{
		while (*(str + i) != '\0')
		{
			i++;
		}
		if (i % 2 != 0)
		{
			odd = 1;
		}
		for (j = i / 2 + odd; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\0');
}
