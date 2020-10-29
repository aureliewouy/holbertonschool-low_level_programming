#include "lists.h"

/**
 * print_list - Prints all the element of a list_t list
 * @h: the head (the first node)
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			node++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node++;
	}
	return (node);
}
