#include "lists.h"
#define STR(X)  ((X) ? (X) : ("(nil)"))

/**
 * print_list - Prints all the elements of a list_t list
 *
 * @h: Linked list of tyoe list_t
 * Return: Many Nodes
 */

size_t print_list(const list_t *h)
{
	list_t *current = NULL;
	size_t manyNodes = 0;

	current = (list_t *) h;

	while (current)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, STR(current->str));

		current = current->next;
		manyNodes++;
	}

	return (manyNodes);
}
