/**
 * _strlen - return the length of a string
 *
 * @s: The string
 *
 * Return: An integer
 */

int _strlen(char *s)
{
	int i = 0;
	char c;

	if (!*s)
	{
		return (0);
	}

	while (c != '\0')
	{
		i++;
		c = *(s + i);
	}

	return (i);
}
