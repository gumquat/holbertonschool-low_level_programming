#include "hash_tables.h"
/**
 *hash_table_set - adds an element to the hash table
 *@ht: the hash table
 *@key: keeeeey
 *@value: value associated with the key
 *Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *newNode;
	hash_node_t *current;
	
	// check if the data passed thru is usable, otherwise return 0
	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	newNode = malloc(sizeof(hash_node_t));
	
	//check if there was room enough to make the new node, otherwise return 0
	if (newNode == NULL)
			return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;

		if (current)
		{
				if (strcmp(current->key, key) == 0)
				{
					newNode->next = current;
					ht->array[index] = newNode;
					return (1);
				}
		
					while (current->next)
					{
				
						if (strcmp(current->next->key, key) == 0)
						{
		
							newNode->next = current->next->next;
							free(current->next->key), free(current->next->value), free(current->next);
							current->next = newNode;
							return (1);
						}
		
						current = current->next;
					}

		newNode->next = ht->array[index];
		ht->array[index] = newNode;

		return (1);

	}
		ht->array[index] = newNode;
		return (1);
}
