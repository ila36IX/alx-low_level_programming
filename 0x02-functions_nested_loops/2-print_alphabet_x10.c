#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int j;

	for (j = 1; j <= 10; j++)
	{
		int i;

		for (i = 97; i <= 122; i++)
		{
			_putchar((char) i);
		}
		_putchar('\n');
	}
}
