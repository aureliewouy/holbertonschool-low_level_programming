#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: the head
 * @index: the index
 *
 * Return: 1 if succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *tmp = *head;
	dlistint_t *store;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		store = tmp;
		if (tmp->next)
		{
			tmp->next->prev = NULL;
			(*head) = tmp->next;
		}
		else
			*head = NULL;
		free(store);
		return (1);
	}
	while (tmp && index + 1 > 1)
	{
		tmp = tmp->next;
		index--;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next)
	{
		tmp->next->prev = tmp->prev;
		free(tmp);
	}
	return (0);
}
