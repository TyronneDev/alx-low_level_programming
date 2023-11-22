#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: pointer to the first node of list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;

	}
}
