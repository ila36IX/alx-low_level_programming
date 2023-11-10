#include "hash_tables.h"

#define COMMA(s) ((s)? (", ") : (""))
/**
 * hash_table_print - Print a hash tabel
 *
 * @ht: #t
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
        hash_node_t *walk;
        unsigned long int size;
        unsigned long int i;
        hash_node_t **array;
        int ending_comma = 0;

        if (!ht)
                return;

        size = ht->size;
        array = ht->array;
        printf("{");
        for (i = 0 ; i < size ; i++)
        {
                walk = array[i];
                while (walk)
                {
                        printf("%s", COMMA(ending_comma));
                        printf("\'%s\': \'%s\'", walk->key, walk->value);
                        walk = walk->next;
                        ending_comma = 1;
                }
        }
        printf("}\n");
}
