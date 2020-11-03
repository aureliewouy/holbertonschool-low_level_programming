#include "lists.h"

/**
 * free_listint2 - Free a list
 * @head: the head
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *node = NULL;

	while (*head)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
	*head = NULL;
}
