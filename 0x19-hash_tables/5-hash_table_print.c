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

	flag = 1;
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp)
		{
			if (flag == 1)
				printf("'%s': '%s'", temp->key, temp->value);
			else
			{
				printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
			}
			temp = temp->next;
			flag = 0;
		}
	}
	printf("}\n");
}
