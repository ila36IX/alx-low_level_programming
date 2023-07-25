#include "main.h"

/**
 * _puts - Print string in stdout
 *
 * @str: The string
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	char c;
	int i;

	while (c != '\0')
	{	
		c = *(str + i);
		_putchar(c);
		i++;
	}

	_putchar("\n");
}
