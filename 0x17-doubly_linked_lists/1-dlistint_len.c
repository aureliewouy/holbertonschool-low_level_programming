#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a liked list
 * @h: the head
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
