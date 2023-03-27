#include "hash_tables.h"

/**
 *hash_table_print - print data within a hash table
 *@ht: hash table
 *Return: ...
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index;
	unsigned char comma_bool = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (comma_bool == 1)
				printf(", ");

			node = ht->array[index];

			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;

				if (node != NULL)
				printf(", ");
			}
		comma_bool = 1;
		}
	}
		printf("}\n");
}
