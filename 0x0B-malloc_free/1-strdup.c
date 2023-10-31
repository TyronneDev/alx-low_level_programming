#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *_strdup - a function that copies a string to a newly allocated space in memory
 *
 * @str: string to copy to new location in memory
 *
 * Return: NULL or pointer to copied string
*/

char *_strdup(char *str)
{
	int i = 0, l = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	/*calculate size of str*/
	while (str[l] != '\0')
		l++;

	s = malloc((l + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
