#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers
 *
 * @separator: String to be printed between numbers
 * @n: Number of integers passsed to the function
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list numbers;

	va_start(numbers, n);

	while (i--)
	{
		printf("%d", va_arg(numbers, int));
		if (i && separator)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
