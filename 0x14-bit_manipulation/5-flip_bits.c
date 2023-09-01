#include "main.h"

/**
 * flip_bits - number of bits you would need to flip to get
 * from one number to another
 *
 * @n: Number that will mani flippeds will be calulated bases on
 * @m: Second number
 * Return: Many flipes are needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, many_flips = 0;

	for (i = 0; i < 64; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			many_flips++;
	}
	return (many_flips);
}
