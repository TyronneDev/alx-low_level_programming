#include "lists.h"

/**
 * pop_listint - function to delete the head node of a linked list
 * @head: pointer to the first node of the list
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *first;

	if (head == NULL || *head == NULL)
		return (0);

	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);

}
