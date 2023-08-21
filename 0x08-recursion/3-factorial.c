#include "main.h"

/**
 * factorial - The factorail of given number
 *
 * @n: Integer
 * Return: The factorail of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
