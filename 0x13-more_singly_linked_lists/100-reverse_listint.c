#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 *
 * @head: Pointer to pointer to first node in list
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevs = NULL;
	listint_t *next = NULL;

	if (head == NULL)
		return (NULL);


	while ((*head))
	{
		next = (*head)->next;
		(*head)->next = prevs;
	
		prevs = (*head);
		(*head) = next;
	}
	(*head) = prevs;

	return ((*head));
}
