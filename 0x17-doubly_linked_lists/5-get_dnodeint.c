#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 *
 * @head: the head
 * @index: the index
 *
 * Return: the nth node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	i = 0;
	temp = head;
	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (index == i)
			break;
		temp = temp->next;
		i++;
	}

	return (temp);

}
