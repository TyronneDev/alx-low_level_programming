#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at idx of a doubly linked list
 * @head: head of doubly linked list
 * @index: index of the node, starting from 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (current_node != NULL)
	{
		if (i == index)
		{
			if (current_node->prev)
				current_node->prev->next = current_node->next;
			if (current_node->next)
				current_node->next->prev = current_node->prev;
			if (i == 0)
				*head = current_node->next;
			free(current_node);
			return (1);
		}
		current_node = current_node->next;
		i++;
	}
	return (-1);
}
