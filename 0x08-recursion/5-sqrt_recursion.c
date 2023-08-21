#include "main.h"

int _sqrt(int a, int b);

/**
 * _sqrt_recursion  - Square root calculation
 *
 * @n: Integer
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}

/**
 * _sqrt - square root chacker
 *
 * @a: The number
 * @b: Possibly its root square
 * Return: The root squre or -1
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b > a / 2 || a < 0)
	{
		return (-1);
	}
	else
		return (_sqrt(a, b + 1));
}
