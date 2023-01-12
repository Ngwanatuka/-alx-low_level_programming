#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 * otherwise -1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (!ht || !*key || !value)
		return (0);
	unsigned long int index = key_index(key, ht->size);
	hash_node_t *current;

	for (current = ht->array[index]; current; current = current->next)
	{
		if (!strcmp(current->key, key))
		{
			free(current->value);
			current->value = strdup(valuee);
			return (1);
		}
	}
	current = malloc(sizeof(hash_nide_t));
	if (!currnet)
		return (0);
	current->key = strdup(key);
	current->value = strdup(value);
	current->next = ht->array[index];
	ht->array[index] = current;
	return (1);
}
