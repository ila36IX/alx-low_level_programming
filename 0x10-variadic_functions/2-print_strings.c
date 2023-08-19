#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print string followed by new line
 *
 * @separator: String to be printed between the strings
 * @n: Number of strng passed to the function
 * Return: Nothng.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	int i = n;
	char *str;

	va_start(strings, n);

	while (i--)
	{
		str = va_arg(strings, char *);
		if (str)
			printf("%s", str);
		else
			printf("nil");
		if (i && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
