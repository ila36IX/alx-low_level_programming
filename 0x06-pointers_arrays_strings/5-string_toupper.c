#include "main.h"

/**
 * string_toupper - to upper case
 * @str: The string
 *
 * Return: Upeercase string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		int asc = *(str + i);

		if (asc >= 97 && asc <= 122)
		{
			*(str + i) = (char) (asc - 32);
		}
		i++;
	}
	return (str);
}
