#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_me - print a wonted variable of any type
 *
 * @c: charachter
 * @arg: Declared va_list
 * @checker: checks if there is another string to separate it by comma
 * Return: Nothing.
 */
void print_me(char c, va_list arg, char checker)
{
	char *comma = ", ";
	char *string;

	if (!checker)
		comma = "";
	switch (c)
	{
	case 'c':
		printf("%c%s", va_arg(arg, int), comma);
		break;
	case 'i':
		printf("%i%s", va_arg(arg, int), comma);
		break;
	case 'f':
		printf("%f%s", va_arg(arg, double), comma);
		break;
	case 's':
		string = va_arg(arg, char *);
		if (string)
		{
			printf("%s%s", string, comma);
			break;
		}
		printf("(nil)%s", comma);
		break;
	}
}

/**
 * print_all - Print anything
 *
 * @format: strings contains list of type of arguments
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list arg;

	va_start(arg, format);
	while (*(format + i))
	{
		print_me(*(format + i), arg, *(format + i + 1));
		i++;
	}
	va_end(arg);

	printf("\n");
}
