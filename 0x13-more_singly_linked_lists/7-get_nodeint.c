#include "lists.h"

/**
 * get_nodeint_at_index - get node at *index nth from a linked list
 * @h: pointer to a first node of list
 * @index: no of elements
 * 
 * Return:node at nth index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	/*iterate thorugh nodes in list till the index nth node*/
	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	/*return head*/
	return (head);
}
