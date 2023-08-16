#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 *
 * @argc: arguments counter
 * @argv: arguments vectory
 * Return: Zero
 */
int main(int argc, char **argv)
{
	while(argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
