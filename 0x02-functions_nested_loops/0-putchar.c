/*Prototype*/
int print(char *str);
int _putchar(char c);

/**
 * main - Entry main
 *
 * Return: ineger
 */
int main(void)
{
	print("_putchar\n");
	return (0);
}

/**
 * print - print a string the standerd output
 *
 * @str: The string that wimm output
 * Return: integer
 *
 */
int print(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}
