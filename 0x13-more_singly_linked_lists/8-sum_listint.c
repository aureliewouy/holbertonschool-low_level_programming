#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: the head
 *
 * Return: the sum of all data(n) or 0 if its empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
