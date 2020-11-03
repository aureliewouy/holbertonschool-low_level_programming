#include "lists.h"

/**
 * pop_listint  - Deletes the head node of a list
 * @head: the head
 *
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;

	if (*head == NULL || temp == NULL)
		return (0);

	if ((*head)->next == NULL)
	{
		*head == NULL;
	}
	if (temp)
	{
		*head = temp->next;
		free(temp);
	}
	else
	{
		return (0);
	}
	return ((*head)->n - 1);
}
