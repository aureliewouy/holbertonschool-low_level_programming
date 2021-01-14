#include "hash_tables.h"
/**
 * key_index - Function that gives the index of a key
 * @key: is the key
 * @size: the size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be store in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;

	index = hash_djb2(key);
	index = index % size;

	return (index);
}
