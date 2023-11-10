#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with key
 *
 * @ht: Pointer to hash table
 * @key: The key
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
        hash_node_t *walk;
        unsigned long int index;

        if (!ht || !key)
                return (NULL);

        index = key_index((const unsigned char *) key, ht->size);
        walk = ht->array[index];
        while (walk)
        {
                if (!strcmp(walk->key, key))
                        return (walk->value);
                walk = walk->next;            
        }
        return (NULL);
}
