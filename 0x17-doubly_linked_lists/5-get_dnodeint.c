#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node of a dlistint_t linked list
 * @head: head of double linked list
 * @index: index of the node, starting from 0
 * Return: address of nth node otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int nodes = 0;

	if (head == NULL)
		return (NULL);

	while (current_node != NULL)
	{
		nodes++;
		if ((nodes - 1) == index)
			return (current_node);
		current_node = current_node->next;
	}
	return (NULL);
}
