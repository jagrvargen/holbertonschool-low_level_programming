#include "hash_tables.h"

/**
 * hash_djb2 - A hashing function.
 *
 * @str: A string value which is the key belonging to a node.
 *
 * Return: A hash developed from the key.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
        unsigned long int hash = 5381;
        int c;

        while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

        return (hash);
}
