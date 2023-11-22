#include "lists.h"

/**
 * free_listint2 - a function to free a linked list
 * @head: pointer to first node of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;

	}
	*head = NULL;

}
