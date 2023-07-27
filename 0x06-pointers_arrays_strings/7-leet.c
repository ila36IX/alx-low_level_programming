#include "main.h"
#include <stdio.h>

/**
 * leet - Function that encodes a string into 1337
 * @str: string
 *
 * Return: str that have been encooded
 */

char *leet(char *str)
{
	int i = 0, j;
	int arr[10];
	int arr2[10];

	arr2[0] = 0;
	arr2[1] = 1;
	arr2[2] = 1;
	arr2[3] = 3;
	arr2[4] = 4;
	arr2[5] = 0;
	arr2[6] = 3;
	arr2[7] = 7;
	arr2[8] = 4;
	arr2[9] = 7;


	arr[0] = 79;
	arr[1] = 76;
	arr[2] = 108;
	arr[3] = 69;
	arr[4] = 65;
	arr[5] = 111;
	arr[6] = 101;
	arr[7] = 84;
	arr[8] = 97;
	arr[9] = 116;

	while (*(str + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (((int) *(str + i)) == arr[j])
			{
				*(str + i) = (char) (arr2[j] + 48);
			}
		}
		i++;
	}
	return (str);
}
