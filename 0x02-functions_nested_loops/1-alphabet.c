#include "main.h"
/**
 * print_alphabet - print from a to z
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar((char) i);
	}

		_putchar('\n');
}
