#include "has_tables.h"

/**
 *hash_table_create - create a hash table
 *@size: size of array getting passed
 *Return: null on failure a pointer on success
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index = 0;
	hash_table_t *hash_table = malloc(sizeof(has_table_t));

	if (!has_table)
		return (NULL);
	if (!size)
		return (NULL);

	has_table->array = malloc(sizeof(hash_node_t *) * size);

	if (!hash_table->array)
		return (NULL);

	while (index++ < size)
		hash_table->[index] = NULL;

	hash_table->size = size;
	return (hash_table);
}
