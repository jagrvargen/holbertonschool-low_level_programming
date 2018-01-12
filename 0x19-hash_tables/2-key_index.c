#include "hash_tables.h"

/**
 * key_index - A function that gives the index of a key.
 *
 * @key: A pointer to a string containing the key.
 * @size: An unsigned long integer indicating the size of the array.
 *
 * Return: An unsigned long integer representing the array's index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index %= size;

	return (index);
}
