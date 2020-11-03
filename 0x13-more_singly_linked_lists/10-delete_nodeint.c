#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: the head
 * @index: the index
 *
 * Return: 1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *temp2;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (-1);
	}
	else
	{
		while (count < index - 1)
		{
			temp = temp->next;
			count++;
		}
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp2 = temp->next;
		temp->next = temp2->next;
		free(temp2);
	}
	return (1);
}
