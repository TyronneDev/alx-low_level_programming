#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - function that creates an array of integers
* @min: least values
* @max: largest values
* Return: returns NULL if min>max
* otherwise the pointer to the newly created array
**/

int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i += 1)
	{
		p[i] = min + i;
	}
	return (p);
}
