#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: the head
 * @str: the string
 *
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail;
	int i = 0;

	if (!head || !str)
		return (NULL);
	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	while (new->str[i])
		i++;
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new;
	}
	return (new);
}
