#include "lists.h"

/**
 * get_dnodeint_at_index - nth node of a dlistint_t linked list
 *
 * @head: Address of the head of the node
 * @index: Index of the desire node
 * Return: Address of the node, or NULL if it's out of range
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = NULL;

	current = head;
	while (current != NULL && index != 0)
	{
		index--;
		current = current->next;
	}
	if (index == 0)
	return (current);
	else
	return (NULL);
}
/**
 * dlistint_len -  Number of elements in a linked dlistint_t list
 *
 * @h: Head of the list
 * Return: Size of the DLL
 */
size_t dlistint_len(const dlistint_t *h)
{
        dlistint_t *current = (dlistint_t *) h;
        size_t i = 0;

        while (current != NULL)
        current = current->next, i++;
        return (i);
}
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: Head of the DLL
 * @idx: Index where the new node will be inserted
 * @n: THe new node date
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = get_dnodeint_at_index(*h, idx);
	dlistint_t *new_node = NULL;
	

	if (dlistint_len(*h) == idx)
	return (add_dnodeint_end(h, n));
	
	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);
	if (idx == 0)
	return (add_dnodeint(h, n));
	if (node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = node;
	new_node->prev = node->prev;

	if (*h == NULL)
	(*h) = new_node;

	if (n != 0 && (*h) != NULL)
	node->prev->next = new_node;
	else
	(*h) = new_node;

	node->prev = new_node;

	return (new_node);
}
