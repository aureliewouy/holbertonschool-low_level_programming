#include "lists.h"

/**
 * listint_len - The number of elements in a linked list
 * @h: the haead
 *
 * Return: the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
