#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as 
 * a parameter on each element of array
 * @array: array the function will be executed on
 * @size: size of array
 * @action: pointer to the function
 * Return: void
 */

void array_iterator(int  *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);

	}
}
