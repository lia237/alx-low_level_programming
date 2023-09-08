#include "hash_tables.h"

/**
* hash_table_create - create a new hash table
* @size: size of the array
* Return: a pointer to the new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int index = 0;
    hash_table_t *ht = malloc(sizeof(hash_table_t));

    if (!ht)
        return (NULL);
    ht->array = malloc(sizeof(hash_node_t **) * size);
    if (!ht->array)
    {
        free(ht);
        return (NULL);
    }
    while (index < size)
    {
        ht->array[index] = NULL;
        index++;
    }
    ht->size = size;
    return (ht);
}

