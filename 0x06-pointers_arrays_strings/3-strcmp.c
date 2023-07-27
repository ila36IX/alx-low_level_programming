#include "main.h"

/**
 * _strcmp - Compare two string
 *
 * @s1: String to be compared
 *
 * @s2: C string to be compared
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	
	do
	{
		if ((int) *(s1 + i) != (int) *(s2 + i))
		{
			return ((int) *(s1 + i) - (int) *(s2 + i));
		}
		else
		{
			i++;
		}
	}
	while (*(s1 + i) != '\0');

	return (0);
}
