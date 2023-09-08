#include "hash_tables.h"

/**
 * hash_djb2 - Hash function that implements the djb2 algorithm.
 * @str: Key to apply the transformation.
 *
 * Return: Unsigned long integer after the operations.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int character;

    hash = 5381;
    while ((character = *str++))
    {
        hash = ((hash << 5) + hash) + character; /* hash * 33 + character */
    }
    return (hash);
}

