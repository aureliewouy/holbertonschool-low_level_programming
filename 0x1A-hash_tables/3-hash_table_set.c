#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *node = NULL;
	unsigned int i;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	if (tmp == NULL)
	{
		node->next = ht->array[i];
		ht->array[i] = node;
		return (1);
	}
	if (tmp->key == node->key)
	{
		free(tmp->value);
		tmp->value = node->value;
		return (1);
	}
	return (0);

}
