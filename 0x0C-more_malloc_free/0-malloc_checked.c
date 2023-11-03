#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: number of bytes
 *
 * Return: pointer to allocated memory
 *         or termination with status value 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
	void *alloc_mem;

	alloc_mem = malloc(b);
	if (alloc_mem == NULL)
		exit(98);
	return (alloc_mem);
}
