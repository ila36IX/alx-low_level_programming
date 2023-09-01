#include "main.h"

/**
 * get_endianness - Check the endiannesss of a system
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int alpha = 1;
	char *p = (char *) &alpha;

	return ((int) *p);
}

