#include "function_pointers.h"

/**
 * print_name - Print name
 *
 * @name: The name
 * @f: The function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
