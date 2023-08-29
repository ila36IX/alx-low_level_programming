#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 *
 * @head: Pointer to pointer to first node in list
 * @idx: Index where new node should be added
 * @n: New node data
 * Return: Pointer to new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = NULL;
	listint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current = *head;

	if (*head == NULL && idx == 0)
	{
		new_node->next = NULL;
		(*head) = new_node;
		return (new_node);
	}

	while (current && --idx)
		current = current->next;

	if (current == NULL && idx != 0)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
