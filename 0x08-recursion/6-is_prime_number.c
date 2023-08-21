#include "main.h"

/**
 * is_prime - Checks if it prime number
 *
 * @n: Integer
 * @d: Integer
 * Return: 1 if it is prime and 0 otherwise
 */

int is_prime(int n, int d)
{
	if (d <= 1)
		return (0);
	else if (d == 2)
		return (1);
	else if (n % d == 0)
		return (0);
	else
		return (is_prime(n, d - 1));
}

/**
 * is_prime_number - Checks if it prime
 *
 * @n: Integer
 * Return: 1if it is prime and 0 otherwise
 */
int is_prime_number(int n)
{
		return (is_prime(n, n / 2));
}
