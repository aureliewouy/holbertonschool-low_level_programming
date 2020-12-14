#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 *
 * @head: the head
 *
 * @n: the number
 *
 * Return: the address of the new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
		new->prev = tmp;
	}
	tmp->next = new;

	return (tmp);
}
