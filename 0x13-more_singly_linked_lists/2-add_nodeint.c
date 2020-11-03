#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: the head
 * @n: the number
 *
 * Return: the address of the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
