#include "lists.h"
/**
 * add_dnodeint - adds a new node at the begining of a dlistint_t list
 * @head: the head of the node
 * @n: the number
 *
 * Return: the address of the new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	if (*head)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
