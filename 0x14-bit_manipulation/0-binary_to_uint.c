#include "main.h"


/**
 * binary_to_uint - Converts a binary number to an unsigned int
 *
 * @b: Binary number as string
 * Return: Unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int length = 0, j;
	unsigned int binery = 0;
	int power_two = 1;

	if (b == NULL)
		return (0);

	while (b[++length])
	{
		if ((b[length] - '0') != 1 && (b[length] - '0') != 0)
			return (0);
	}

	for (j = length - 1; j >= 0; j--)
	{
		binery += (int) (b[j] - '0') * power_two;
		power_two *= 2;
	}

	return (binery);
}
