#include "hash_tables.h"
#include <string.h>

/**
 * shash_table_create - Init new hashtable
 *
 * @size: size of the array
 * Return: Pointer to the allocated HashTable
 */
HASH_TABLE *shash_table_create(SIZE_t size)
{
	HASH_TABLE *ht;
	NODE **array;
	size_t i;

	ht = malloc(sizeof(HASH_TABLE));
	if (!ht)
	{
		printf("Field to allocate the HashTable\n");
		exit(100);
	}
	array = malloc(sizeof(NODE) * size);
	for (i = 0; i < size; i++)
		array[i] = NULL;
	if (!array)
	{
		printf("Field to allocate the array\n");
		exit(100);
	}
	ht->array = array;
	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * add_node_end - add new key-value pair in the end of LL chaine
 *
 * @head: Pointer to the first element of the Linked List
 * @key: Unique identifier
 * @value: paired with the kay
 * Return: Pointer to the new allocated bucket
 */
NODE *add_node_end(NODE **head, const char *key, const char *value)
{
	NODE *walk, *node;

	node = malloc(sizeof(NODE));
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	walk = *head;
	if (walk)
	{
		while (walk->next)
			walk = walk->next;
		walk->next = node;
	}
	else
		*head = node;
	return (node);
}

/**
 * insert_node_sort - insert the allocated node in sorted linked list by key
 *
 * @ht: Sorted hash table data structure
 * @key: Identifier
 * @node: New allocated value that will be inserted
 * Return: Noting
 **/
void insert_node_sort(HASH_TABLE *ht, const char *key, NODE *node)
{
	NODE *walk;

	(void) key;
	walk = ht->shead;
	if (!walk)
	{
		node->snext = NULL, node->sprev = NULL;
		ht->shead = node, ht->stail = node;
	}
	while (walk)
	{
		if (strcmp(node->key, (const char *) walk->key) <= 0)
		{
			node->snext = walk;
			node->sprev = walk->sprev;
			if (walk->sprev)
				walk->sprev->snext = node;
			else
				ht->shead = node;
			walk->sprev = node;
			return;
		}
		if (!walk->snext)
		{
			walk->snext = node;
			node->snext = NULL;
			node->sprev = walk;
			ht->stail = node;
			return;
		}
		walk = walk->snext;
	}
}

/**
 * update_key_ifexist - update value of a key if that key already exists
 *
 * @head: head of the linked list inside the hash table
 * @key: string that will be the key
 * @value: corresponding value of key
 *
 * Return: return 1 if the key is exist after updating its new value or 0
 * if key doesn't exist
 */
int update_key_ifexist(NODE *head, const char *key, const char *value)
{
	NODE *walk = head;

	while (walk)
	{
		if (strcmp(walk->key, key) == 0)
		{
			free(walk->value);
			walk->value = strdup(value);
			return (1);
		}
		walk = walk->next;
	}
	return (0);
}

/**
 * shash_table_set - create new key-value node and insert it in the sorted
 * linked list
 *
 * @ht: HashTable data structure
 * @key: Identifier
 * @value: Identifier value
 *
 * Return: 1 if no error accures, 0 otherwise
 */
int shash_table_set(HASH_TABLE *ht, const char *key, const char *value)
{
	SIZE_t index;
	NODE **list_nodes;
	NODE *added_node;

	if (!ht)
	{
		printf("Giving hashtable is not allocated\n");
		exit(100);
	}
	index = key_index((const unsigned char *) key, ht->size);
	list_nodes = &(ht->array)[index];
	if (update_key_ifexist(*list_nodes, key, value))
		return (1);
	added_node = add_node_end(list_nodes, key, value);
	insert_node_sort(ht, key, added_node);
	return (1);
}

/**
 * shash_table_print - print the key/value in the sorted linked list
 *
 * @ht: hashtable
 * Return: Nothing
 */
void shash_table_print(HASH_TABLE *ht)
{
	NODE *walk;

	walk = ht->shead;
	printf("{");
	while (walk)
	{
		printf("\'%s\': \'%s\'", walk->key, walk->value);
		walk = walk->snext;
		if (walk)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the key/value in the sorted linked list in
 * reverse order
 *
 * @ht: hashtable
 * Return: Nothing
 */
void shash_table_print_rev(HASH_TABLE *ht)
{
	NODE *walk;

	walk = ht->stail;
	printf("{");
	while (walk)
	{
		printf("\'%s\': \'%s\'", walk->key, walk->value);
		walk = walk->sprev;
		if (walk)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Free all the allocated heap memory
 *
 * @ht: hashtable
 * Return: Nothing
 */
void shash_table_delete(HASH_TABLE *ht)
{
	SIZE_t i;
	NODE *node, *temp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}

	if (ht->array)
		free(ht->array);
	free(ht);
}
