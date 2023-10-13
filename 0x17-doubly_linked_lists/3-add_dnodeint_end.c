#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: Pointer to head of DLL
 * @n: Date of the new node
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = NULL;
	dlistint_t *new_end = NULL;

	new_end = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_end == NULL)
	return (NULL);

	if (head != NULL && *head != NULL)
	{
		current = *head;
		while (current->next != NULL)
		current = current->next;

		current->next = new_end;
	}

	new_end->next = NULL;
	new_end->prev = current;
	new_end->n = n;
	if (*head == NULL)
	*head = new_end;
	return (new_end);
}
