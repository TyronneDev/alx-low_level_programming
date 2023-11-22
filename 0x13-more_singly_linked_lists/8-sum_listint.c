#include "lists.h"

/**
 * sum_listint - function that returns sum of all the data in a linked list
 * @head: pointer to first node of the list
 * Return: sum of all the data
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
