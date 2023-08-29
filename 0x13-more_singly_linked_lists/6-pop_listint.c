#include "lists.h"

/**
 * pop_listint - Delete the head of L-list
 *
 * @head: Pointer to pointer to a list head
 * Return: Nothing.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp = NULL;

	if (head == NULL)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	(*head) = tmp;

	return (n);
}
