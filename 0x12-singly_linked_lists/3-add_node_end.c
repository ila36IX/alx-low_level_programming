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
 * add_node_end - Adds a new node at the end of list
 *
 * @head: The head of the list
 * @str: The string that will be added
 * @Return: The address of new ellement
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail = NULL;
	list_t *last_element = *head;
	
	new_tail = malloc(sizeof(list_t));
	
	if (new_tail == NULL)
	{
		free(new_tail);
		return (NULL);
	}

	new_tail->str = strdup(str);

	if (new_tail->str == NULL)
	{
		free(new_tail);
		return (NULL);
	}
	
	new_tail->len = _strlen(str);
	new_tail->next = NULL;

	if (*head == NULL)
	{
		*head = new_tail;
		return (new_tail);
	}
	
	last_element = *head;
	while(last_element->next != NULL)
		last_element = last_element->next;

	last_element->next = new_tail;

	return (new_tail);
}
