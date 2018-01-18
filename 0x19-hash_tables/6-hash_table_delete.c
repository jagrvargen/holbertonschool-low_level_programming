#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table.
 *
 * @ht: A hash table.
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *delete;
	hash_node_t *next;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			delete = ht->array[index];
			while (delete != NULL)
			{
				next = delete->next;
				free(delete->key);
				free(delete->value);
				free(delete);
				delete = next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
