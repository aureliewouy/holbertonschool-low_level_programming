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
	dlistint_t *curr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	curr = *head;
	new->n = n;
	new->next = curr;
	*head = new;
	return (*head);
}
