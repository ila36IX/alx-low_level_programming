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
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
