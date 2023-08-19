#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum of numbers
 *
 * @n: Many numbers
 * Return: Integer of sum of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list numbers;

	if (n == 0)
		return (0);
	va_start(numbers, n);
	for (i = n; i > 0; i--)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
