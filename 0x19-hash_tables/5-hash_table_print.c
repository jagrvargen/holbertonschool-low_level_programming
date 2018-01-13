#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table.
 *
 * @ht: A hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;
	int flag;

	if (ht == NULL)
		return;

	printf("{");

	flag = 0;
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		if (flag == 1)
			printf(", ");
		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
		flag = 0;
	}

	printf("}\n");
}
