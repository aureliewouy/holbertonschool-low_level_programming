#include "lists.h"

/**
 * free_listint2 - Free a list
 * @head: the head
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (temp)
	{
		*head = temp->next;
		free(temp);
		temp = *head;
	}
	head = NULL;
}
