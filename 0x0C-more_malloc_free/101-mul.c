#include "main.h"
#include <stdio.h>
/**
 * main - Program that mulplies two positive numbers
 * @argc: Number of argumenets
 * @argv: Muldimensional array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	char *n = NULL;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[1][0] == '0' || argv[2][0] == '0')
	{
		printf("%c\n", '0');
		return (0);
	}

	n = multiplication(argv[1], argv[2]);

	for (i = 0, j = 0;; i++)
	{
		if (n[i] != '0')
			j = 1;
		if (j == 1 && n[i] == '\0')
			break;
		if (j == 1)
			printf("%c", n[i]);
	}
	printf("\n");

	return (0);
}

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Elements of the array
 * @size: Data type size
 * Return: Pointer to the new allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *naw_array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	naw_array = malloc(nmemb * size);

	if (naw_array == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		naw_array[i] = 0;

	return (naw_array);
}

/**
 * _strlen - Calculates the length of a string
 * @s: String
 * Return: The lengtht of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (-1);

	while (*(s++))
		i++;

	return (i);
}

/**
 * multiplication - Function that multiplies two big numbers
 * @s1: String big number 1
 * @s2: String big number 2
 * Return: a result of the two big numbers
 */
char *multiplication(char *s1, char *s2)
{
	int i, j, k, l;
	int value;
	char *n;

	i = _strlen(s1);
	j = _strlen(s2);
	k = i + j + 1;

	n = _calloc(k, sizeof(char));

	if (n == NULL)
		printf("Error\n"), exit(98);

	n[k - 1] = '\0';

	for (--i; i >= 0; i--)
	{
		if (*(s1 + i) < '0' || *(s1 + i) > '9')
			free(n), printf("Error\n"), exit(98);

		for (l = j - 1; l >= 0; l--)
		{
			if (*(s2 + l) < '0' || *(s2 + l) > '9')
				free(n), printf("Error\n"), exit(98);

			value = (*(s1 + i) - '0') * (*(s2 + l) - '0');
			*(n + i + l + 1) += value;
			if (*(n + i + l + 1) > 9)
			{
				value = *(n + i + l + 1);
				*(n + i + l + 1) %= 10;
				*(n + i + l) += value / 10;
			}
		}
	}
	for (i = 0; i < k - 1; i++)
		*(n + i) += '0';
	return (n);
}
