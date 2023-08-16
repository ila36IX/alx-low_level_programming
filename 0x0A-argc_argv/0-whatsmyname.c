#include <stdio.h>

/**
  * main - Print the program name
  *
  * @argc: Arguments counter
  * @argv: Argements vectory
  * Return: Zero
  */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
