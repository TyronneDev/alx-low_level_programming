#include "lists.h"

/**
 * dlistint_len - fxn that returns num of elements
 * in doubly linked list
 *
 * @h: head of doubly linked list
 * Return: number of elements in a doubly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
