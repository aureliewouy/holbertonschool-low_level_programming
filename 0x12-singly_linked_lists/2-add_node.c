#include "lists.h"

/**
 * add_node - add a new node at the begining of a list
 * @head: the head
 * @str: the string to add
 *
 * @Return: the address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	int i = 0;

	if(!head || !str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new)
	{
		new->str = strdup(str);
		while (new->str[i])
			i++;
		new->len = i;
		new->next = *head;
		*head = new;
		return (new);
	}
	return (NULL);
}
