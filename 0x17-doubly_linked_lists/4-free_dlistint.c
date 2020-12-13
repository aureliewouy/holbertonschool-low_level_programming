#include "lists.h"

/**
 * free_dlistint - frees a list
 *
 * @head: the head of the node
 *
 * Return: Nothing
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;

	}
}
