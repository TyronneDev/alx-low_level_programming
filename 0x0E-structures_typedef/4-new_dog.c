#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - funtion that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: variable pointing to dog_t struct or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	unsigned int i, n, o;

	if (name == NULL || owner == NULL)
		return (NULL);
	n_dog = malloc(sizeof(dog_t));

	/* Dog's new name */
	if (n_dog == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	n++;

	n_dog->name = malloc(n * sizeof(char));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		n_dog->name[i] = name[i];
	/* Dog's new age */
	n_dog->age = age;
	for (o = 0; owner[o]; o++)
		;
	o++;

	n_dog->owner = malloc(o * sizeof(char));

	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < o; i++)
		n_dog->owner[i] = owner[i];
	return (n_dog);
}
