#include "lists.h"

/**
 * listint_len - function that returns the no of elements in a linked list
 * @h: pointer to the first node
 * Return: no of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;

	}
	return (counter);

}
