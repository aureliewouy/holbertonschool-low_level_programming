#include "hash_tables.h"
/**
 * hash_table_get - Functiont that retrieves a value associated with a key
 * @ht: the hash table
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element or NULL is key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const char *key_cp;
	unsigned int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);
	key_cp = strdup(key);
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key_cp) == 0)
			break;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (NULL);
	return (tmp->value);
}
