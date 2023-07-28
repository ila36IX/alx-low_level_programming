#include "main.h"
#include <stdio.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r);

int main(void)
{
	char *str;
	char r[100];
	int res = 0;

	str = infinite_add("3123", "159", r, 4);
	printf("%d\n", str);
	return (0);
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int t;
	int y = 0, x = 0;

	while (*(n1 + x))
	{
		x++;
	}
	while (*(n2 + y))
	{
		y++;
	}
	for (t = 2y - x; t >= 0; t++)
	{
		res = n1[x] + n2[y ] + res;
		
	}
	
}
