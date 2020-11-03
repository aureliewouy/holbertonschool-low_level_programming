#include "lists.h"

/**
 * pop_listint  - Deletes the head node of a list
 * @head: the head
 *
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int temp;

	if (node)
	{
		temp = node->n;
		*head = node->next;
		free(node);
		return (temp);

	}
	else
	{
		return (0);
	}

}
