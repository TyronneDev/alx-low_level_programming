#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: pointer to head of the linked list
 * Return: the number of nodes
 **/

size_t print_list(const list_t *h)
{
	size_t node_C;
	const list_t *next_ptr;

	next_ptr = h;
	node_C = 0;

	while (next_ptr != NULL)
	{
		printf("%i\n", next_ptr->n);
		node_C += 1;
		next_ptr = next_ptr->next;
	}

	return (node_C);
}
