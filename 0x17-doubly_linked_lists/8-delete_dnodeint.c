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
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list.
 *
 * @head: Pointer to the head of the element
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = get_dnodeint_at_index(*head, index);

	if (node == NULL)
	return (-1);
	
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->next->prev = NULL;
		return (1);
	}
	node->prev->next = node->next;
	node->next->prev = node->prev;
	free(node);
	return (1);
}
