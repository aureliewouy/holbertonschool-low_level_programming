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

	hash_node_t *node;
	unsigned int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	if (ht->array[i] != NULL)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, node->key) == 0)
				break;
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
			node->next = ht->array[i];
			ht->array[i] = node;
		}
		else
		{
			free(tmp->value);
			tmp->value = strdup(node->value);
			free(node->value);
			free(node->key);
			free(node);
		}
	}
	else
	{
		node->next = NULL;
		ht->array[i] = node;
	}
	return (1);

}
