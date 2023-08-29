#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: Listint_t head
 * return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *holder = NULL;

	while (head)
	{
		holder = head;
		head = head->next;
		holder->n = 0;
		free(holder);
	}
}
