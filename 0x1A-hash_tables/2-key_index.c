#include "hash_tables.h"

/**
 *key_index - give you the index of a key
 *@key: is the key
 *@size: is the size of the array of the hash table
 *Return: indexed location
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	index = hash_djb2(key);

	return (index);
}
