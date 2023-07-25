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
	int i = 0;
	
	if (*str)
	{
	
		while (*(str + i) != '\0')
		{	
			c = *(str + i);
			_putchar(c);
			i++;
		}
	}
	_putchar('\n');
}
