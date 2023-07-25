#include "main.h"

void rev_string(char *s)
{
	int i = 0;
	int j;

	if (*s)
	{
		while(*(s + i) != '\0')
		{
			i++;
		}
		for (j = 0; j <= i; j++)
		{	
			*(s + j) = *(s + (i - j));
		}
	}
}
