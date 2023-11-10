#include "hash_tables.h"

/**
 * update_key - Update a key value if is already exist
 *
 * @element: Pointer to head of linked list
 * @key: String that its uniqueness matter
 * @value: The new value
 * Return: 1 if it is unique or 0 if it's already exist
 */
hash_node_t *update_key(hash_node_t *element, const char *key, const char *value)
{
        hash_node_t *walk;
        if (!element) 
                return (NULL);

        walk = element;

        while (walk)
        {
                if (!strcmp(walk->key, key))
                {
                        if (walk->value)
                                free(walk->value);
                        walk->value = strdup(value);
                        return (walk);
                }
                walk = walk->next;
        }
        return (NULL);
}

/**
 * insert_in_head - inser new node to the head of LL
 * LL is the linked list in tha array of hash table
 * @head: Pointer to the head
 *
 * Return: new_head
 */
hash_node_t *insert_in_head(hash_node_t **head,
const char *key, const char *value)
{
        hash_node_t *new_root = NULL;
        
        if (!head || !key || !strcmp(key, ""))
                return (NULL);
        
        if ((new_root = update_key(*head, key, value)))
                return (new_root);

        new_root = malloc(sizeof(hash_node_t));
        new_root->key = strdup(key);
        new_root->value = strdup(value);
        new_root->next = *head;
        (*head) = new_root;
        return (new_root);
}

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: The hash tabel
 * @key: Is the key. key can not be an empty string
 * @value: value is the value associated with the key
 * Value must be duplicated. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        unsigned long int index;
        hash_node_t **root;
        
        if (!ht || !key)
                return (0);

        index = key_index((const unsigned char *) key, ht->size);
        root = &(ht->array[index]);
        insert_in_head(root, key, value);

        return (1);
}

