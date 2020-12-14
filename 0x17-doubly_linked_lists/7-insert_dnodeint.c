#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head
 * @idx: the index of the list
 * @n: the number
 *
 * Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *tmp;
	dlistint_t *new;
	unsigned int i = 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	tmp = *h;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (tmp)
	{
		if (idx == i)
			break;
		tmp = tmp->next;
		new->prev = tmp->prev;
		i++;
	}
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
