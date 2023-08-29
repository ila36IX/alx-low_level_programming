#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end
 *
 * @head: Pointer to a pointer to head of list
 * @n: New node data
 * Return: Pointer to new created element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = NULL;
	listint_t *new_tail = NULL;

	new_tail = malloc(sizeof(listint_t));
	if (new_tail == NULL)
		return (NULL);

	new_tail->n = n;
	new_tail->next = NULL;

	if (*head == NULL)
	{
		*head = new_tail;
		return (new_tail);
	}

	current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = new_tail;

	return (new_tail);
}
