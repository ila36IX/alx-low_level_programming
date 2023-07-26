#include "main.h"

/**
 * rev_string - Reverese a string
 *
 * @s: The string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char str[30];

	if (*s)
	{
		while(*(s + i) != '\0')
		{
			*(str + i) = *(s + i);
			i++;
		}

		for (j = 0; j < i; j++)
		{
			*(s + j) = *(str + (i - j - 1));
		}
	}
}
