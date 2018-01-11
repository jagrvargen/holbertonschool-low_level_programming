#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_table;

	my_table = malloc(sizeof(hash_table_t));
	if (my_table == NULL)
		return (NULL);

	my_table->array = malloc(sizeof(hash_node_t*) * size);
	if (my_table->array == NULL)
	{
		free(my_table);
		return (NULL);
	}

	my_table->size = size;

	return (my_table);
}
