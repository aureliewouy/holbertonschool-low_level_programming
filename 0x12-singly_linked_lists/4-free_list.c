#include "lists.h"

/**
 * free_list - frees a list
 * @head: the head
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *node = NULL;

	while (head)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
