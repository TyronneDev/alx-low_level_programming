#include "function_pointers.h"

/**
 * array_iterator - fxn that execs fxn gvn as parameter on each array element 
 * 
 * @array: array the function will be executed on
 * @size: size of array
 * @action: pointer to the function
 **/

void array_iterator(int  *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);

	}
}
