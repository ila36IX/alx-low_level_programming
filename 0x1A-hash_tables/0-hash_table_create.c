#include "hash_tables.h"
/**
 * hash_table_create - creates a hash hash_table
 *
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table
 * If something went wrong, your function should return NULL 
 */
hash_table_t *hash_table_create(unsigned long int size) 
{
        hash_table_t *hash_table = NULL;
        hash_node_t **array = NULL;
        unsigned long int i;

        hash_table = malloc(sizeof(hash_table_t));
        array = malloc(size * sizeof(hash_node_t *));

        if (!hash_table || !size || !array)
                return (NULL);

        for (i = 0 ; i < size ; i++) 
                array[i] = NULL;

        hash_table->size = size;
        hash_table->array = array;

        return (hash_table);
}
