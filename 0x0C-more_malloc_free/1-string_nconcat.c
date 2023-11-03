#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - function that concatenates two strings
* @s1: first string
* @s2: second string
* @n: unsigned int
* Return: a pointer to concatenated sting or NULL if func fails
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l, i;
	unsigned int j;
	char *p;

	l = 0;
	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l])
		l += 1;
	p = malloc(l + n + 1);
	if (p == NULL)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i += 1;
	}

	while (j < n)
	{
		p[i + j] = s2[j];
		j += 1;
	}
	p[i + j] = '\0';
	return (p);
}
