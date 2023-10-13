#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning of a dlistint_t list
 *
 * @head: Pointer to the head of DLL
 * @n: Data of the new node
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head = (dlistint_t *) malloc(sizeof(dlistint_t));

	new_head->prev = NULL;
	new_head->next = *head;
	new_head->n = n;

	*head = new_head;
	return (new_head);
}
