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

	if (ht == NULL || key == NULL || value == NULL || ht->array == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t)); /* Create new node */
	if (new_node == NULL || key == '\0')
		return (0);
	new_node->key = strdup(key); /* Set values of new node */
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = NULL;
	index = hash_djb2((const unsigned char *)key) % ht->size;
	if (ht->array[index] == NULL) /* Put new node in first slot */
		ht->array[index] = new_node;
	else
	{
		if (check_list(ht->array[index], new_node->key) == 1)
		{
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (0);
		}
		new_node->next = ht->array[index]->next;
		ht->array[index]->next = new_node;
	}
	return (1);
}

/**
 * check_list - A function to check for duplicate keys in a linked list;
 *
 * @head: A pointer to a linked list
 * @key: A hash table key value
 *
 * Return: An integer value 1 for match, 0 for not.
 */
int check_list(hash_node_t *head, const char *key)
{
	hash_node_t *search;

	search = head;
	while (search != NULL)
	{
		if (!strcmp(search->key, key))
			return (1);
		search = search->next;
	}
	return (0);
}
