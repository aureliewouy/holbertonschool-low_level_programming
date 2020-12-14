#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a linked list
 *
 * @head: the head
 *
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum;

	if (head == NULL)
		return (0);

	tmp = head;
	sum = 0;
	while (tmp)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
