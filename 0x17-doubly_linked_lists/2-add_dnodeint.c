#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: Pointer to the head of DLL
 * @n: Data of the new node
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new_head == NULL)
	return (NULL);

	new_head->prev = NULL;
	new_head->next = *head;
	new_head->n = n;

	if (*head != NULL)
	(*head)->prev = new_head;

	*head = new_head;
	return (new_head);
}
