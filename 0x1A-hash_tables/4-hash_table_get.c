#include "hash_tables.h"

/**
* hash_table_get - Gets the element from the hash table.
* @ht: Hash table.
* @key: Key to search for.
* Return: The element associated with the key.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int hash_index = 0;
    hash_node_t *current_node = NULL;

    if (!key)
        return (NULL);

    if (ht)
    {
        hash_index = key_index((const unsigned char *)key, ht->size);
        current_node = ht->array[hash_index];
        while (current_node)
        {
            if (strcmp(current_node->key, key) == 0)
                return (current_node->value);
            current_node = current_node->next;
        }
    }
    return (NULL);
}

