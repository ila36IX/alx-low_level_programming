#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: String will be capitalized
 *
 * Return: str in capitalized format
 */

char *cap_string(char *str)
{
	int i = 0;
	int a, b;

	while (*(str + i))
	{
		a = *(str + i);
		b = a == 9;
		b = b || a == 44;
		b = b || a == 59;
		b = b || a == 46;
		b = b || a == 33;
		b = b || a == 63;
		b = b || a == 34;
		b = b || a == 40;
		b = b || a == 41;
		b = b || a == 123;
		b = b || a == 125;
		b = b || a == 32;
		b = b || a == 10;
		if (b)
		{
			if (*(str + i) == '\t')
			{
				*(str + i) = ' ';
			}

			if (i == 0 && *str >= 97 && *str <= 122)
			{
				*str = (char) (*str - 32);
			}
			a = *(str + i + 1);
			if (a >= 97 && a <= 122)
			{
				*(str + i + 1) = (char) (a - 32);
			}
		}
		i++;
	}
	return (str);
}
