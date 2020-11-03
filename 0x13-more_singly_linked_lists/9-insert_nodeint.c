#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: the head
 * @idx: index
 * @n: the number
 *
 * Return: the address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int count;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		temp = *head;
		for (count = 0; count < idx - 1; count++)
		{
			if (temp != NULL)
				temp = temp->next;
		}

		if (temp != NULL)
		{
			new->next = temp->next;
			temp->next = new;
		}
		else
			return (NULL);
	}
	return (new);
}
