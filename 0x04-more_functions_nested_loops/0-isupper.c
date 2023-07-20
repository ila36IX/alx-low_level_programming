#include "main.h"

/**
 * _isupper - Checking if a char is uppercase
 *
 * @c: The charachter
 *
 * Return: 1 if charachter is upper
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
