#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key.
 *
 * @ht: A hash table.
 * @key: The string value of a hash table element.
 *
 * Return: A pointer to the value associated with the key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || key == '\0')
		return (NULL);

	index = hash_djb2((const unsigned char*)key) % ht->size;
	if (ht->array[index] == NULL)
		return (NULL);

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (!strcmp(temp->key, key))
		{
			value = strdup(temp->value);
			if (value == NULL)
				return NULL;
			return (value);
		}
		temp = temp->next;
	}

	return (NULL);
}
