#include "lists.h"

/**
 * reverse_listint - Reverse a linked list
 * @head: the head
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode, *curNode;

	if (*head != NULL)
	{
		prevNode = NULL;
		curNode = *head;
		while (*head != NULL)
		{
			*head = (*head)->next;
			curNode->next = prevNode;
			prevNode = curNode;
			curNode = *head;
		}
	}
	*head = prevNode;
	return (*head);
}
