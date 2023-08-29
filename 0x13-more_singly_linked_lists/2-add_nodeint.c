#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t
 *
 * @head: Head of listint_t list
 * @n: Element of the new head
 * Return: Pointer to the new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = NULL;

	new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;

	*head = new_head;

	return (new_head);
}
