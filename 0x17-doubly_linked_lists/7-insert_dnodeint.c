#include "lists.h"

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
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: Head of the DLL
 * @idx: Index where the new node will be inserted
 * @n: THe new node date
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = get_dnodeint_at_index(*h, idx);
	
	if (node == NULL)
	return (NULL);
	dlistint_t *new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = node;
	new_node->prev = node->prev;
	node->prev->next = new_node;

	node->prev = new_node;

	return (new_node);
}