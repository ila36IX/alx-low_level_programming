#include "main.h"
#include <stdio.h>

/**
 * rot13 - Replaces a letter with the 13th letter after it
 * @str: The string
 *
 * Return: str
 */

char *rot13(char *str)
{
	char a;
	int i = 0, check = 0, j;

	while (*(str + i))
	{
		a = *(str + i);
		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		{
			for (j = 1; j <= 13; j++)
			{
				a = *(str + i);
				check = (a + 1 > 'z') || (a + 1 > 'Z' && a < 'a');
				*(str + i) += 1 - check * 26;
			}
		}
		i++;
	}
	return (str);
}
