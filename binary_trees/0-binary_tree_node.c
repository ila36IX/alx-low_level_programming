#include "binary_trees.h"

/**
 * binary_tree_node - Create a new BT node
 *
 * @value: New node data
 * @parent: Pointer to the parent node
 * Return: Pointer to the new node, or NULL in failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child = NULL;


	new_child = malloc(sizeof(binary_tree_t));
	if (!new_child)
		return (NULL);

	new_child->n = value;
	new_child->right = NULL;
	new_child->left = NULL;
	new_child->parent = parent;
	return (new_child);
}
