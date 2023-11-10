#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - function that prints strings followed by new line
* @separator: string to be printed betweem strings
* @n: numbers of strings passed to the function
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	char *p;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(args, char *);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}
		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
