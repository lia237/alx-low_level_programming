#include "hash_tables.h"

/**
 * hash_table_print - Print the entire hash table.
 * @ht: Hash table.
 *
 * Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int index, flag = 0;
    hash_node_t *current_node;

    if (ht == NULL)
        return;
    putchar('{');
    for (index = 0; index < ht->size; index++)
    {
        current_node = ht->array[index];
        if (current_node != NULL)
        {
            while (current_node != NULL)
            {
                if (flag == 1)
                {
                    printf(", ");
                }
                printf("'%s': '%s'", current_node->key, current_node->value);
                flag = 1;
                current_node = current_node->next;
            }
        }
    }
    putchar('}');
    putchar('\n');
}

