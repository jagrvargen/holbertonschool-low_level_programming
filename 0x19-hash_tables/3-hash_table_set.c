#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hash table.
 *
 * @ht: A hash table
 * @key: The string value associated with the node.
 * @value: A string value associated with the key.
 *
 * Return: An integer value 0 if failed, 1 if passed.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	if (key == '\0') /* Check for empty key */
		return (0);

	new_node = malloc(sizeof(hash_node_t)); /* Create new node */
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key); /* Set values of new node */
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->next = NULL;

	index = hash_djb2((const unsigned char*)key) % ht->size;
        /* Retrieve array index */

	if (ht->array[index]  == NULL) /* Put new node in first slot */
		ht->array[index] = new_node;

	else
	{       /* Set new node to beginning of list */
		new_node->next = ht->array[index]->next;
		ht->array[index]->next = new_node;
	}
	return (1);
}
