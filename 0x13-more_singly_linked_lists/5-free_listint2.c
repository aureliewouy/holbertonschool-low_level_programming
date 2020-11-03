#include "lists.h"

/**
 * free_listint2 - Free a list
 * @head: the head
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	node = *head;
	while (node != NULL)
	{
		*head = node->next;
		free(node);
		node = *head;
	}
	head = NULL;
}
