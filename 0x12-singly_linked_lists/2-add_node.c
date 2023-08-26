#include "lists.h"

/**
 * _strlen - return the length of a string
 *
 * @s: The string
 *
 * Return: An integer
 */
int _strlen(const char *s)
{
	int length = 0;

	if (s == NULL)
		return (0);

	while (s[length] != '\0')
		length++;

	return (length);

}

/**
 * add_node - Adds a new node at the beginning of a list_t
 *
 * @head: The head of a list
 * @str: string will vi add to the head
 * Return: Address to new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = NULL;

	new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
	{
		free(new_head);
		return (NULL);
	}

	new_head->str = strdup(str);

	if (new_head->str == NULL)
	{
		free(new_head);
		return (NULL);
	}
	new_head->len = _strlen(str);
	new_head->next = *head;

	*head = new_head;

	return (new_head);

}
