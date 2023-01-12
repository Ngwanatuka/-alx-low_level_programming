#include "hash_tables.h"

/**
 * key_index - Get the index at which key/value pair should
 * be sorted in array of a hash table.
 *
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 */
unsigned long in key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	return hash % size;
}
