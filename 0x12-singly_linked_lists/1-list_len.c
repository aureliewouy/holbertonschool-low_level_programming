#include "lists.h"

/**
 * list_len - Number of elements in a linked list
 * @h: the head
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
