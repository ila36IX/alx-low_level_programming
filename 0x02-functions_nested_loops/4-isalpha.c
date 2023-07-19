#include <stdio.h>

/**
 *  _isalpha - check if an charachter is alpha
 *
 *  @c: The charechter that want to check
 *
 *  Return: ineger
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
