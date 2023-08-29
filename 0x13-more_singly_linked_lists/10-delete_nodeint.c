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
/**
 * delete_nodeint_at_index -  Deletes the node at index index
 *
 * @head: Pointer to pointer to first node
 * @index: Index of the willeness deleted node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int size = 0;
	listint_t *current = NULL;
	listint_t *tmp = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}

	current = *head;

	while (current)
	{
		current = current->next;
		size++;
	}

	if (size < index)
		return (-1);


	current = *head;

	while (--index)
		current = current->next;

	tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	return (1);

}
