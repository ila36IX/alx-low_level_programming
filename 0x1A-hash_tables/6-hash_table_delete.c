#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: #table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *walk;
	hash_node_t *tmp = NULL;
	hash_node_t **array;
	unsigned long int i;
	unsigned long int size;

	if (!ht)
		return;

	size = ht->size;
	array = ht->array;
	for (i = 0; i < size ; i++)
	{
		walk = array[i];
		while ((tmp = walk))
		{
			free(walk->key);
			free(walk->value);
			walk = walk->next;
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
