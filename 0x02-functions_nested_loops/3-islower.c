#include <stdio.h>

/**
 *  _islower - check if an charachter is lowercase
 *
 *  @c: The charechter that want to check
 *
 *  Return: ineger
 */
int _islower(int c)
{
	if ( c >= 97 && c <= 122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}	
