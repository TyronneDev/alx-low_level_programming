#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: head of doubly linked list
 * Return: the sum of data of doubly linked list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
