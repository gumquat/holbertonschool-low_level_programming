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
	hash_node_t *newNode;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(value_copy);
		return (0);
	}
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = value_copy;
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
