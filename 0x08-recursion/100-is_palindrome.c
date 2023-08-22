#include "main.h"
#include <stdio.h>

/**
 * _strlen - Calculate a string length
 *
 * @s: String
 * Return: Integer presenting length of s
 */
int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen((s + 1)));
	else
		return (0);
}

/**
 * str_slice - Cut the first charachter of string
 * and comare it to the next charachter from the end
 *
 * @s: THe string
 * @i: Indexing
 * Return: 0 or 1
 */
int str_slice(char *s, int i)
{
	if (_strlen(s) < i)
	{

		printf("debugging: %d | strlen :%d", i, _strlen(s));
		return (1);
	}
	else if (*(s) != *(s + (_strlen(s) - i)))
		return (0);
	else
		return (str_slice(s + 1, ++i));

}
/**
 * is_palindrome - Checks string if it is palindrome
 *
 * @s: String
 * Return: NOthing
 */
int is_palindrome(char *s)
{
	return (str_slice(s, 1));
}


