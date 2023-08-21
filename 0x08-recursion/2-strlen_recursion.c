#include "main.h"

/**
 * _strlen_recursion - Length of string
 *
 * @s: Pointer to string
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
