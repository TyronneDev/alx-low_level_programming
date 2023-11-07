#include "dog.h"

/**
 * init_dog - initializes variable of type dog struct
 *
 * @d: pointer to struct dog
 * @name: input for dog name
 * @age: input for dog age
 * @owner: input for dog owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/*d->name = name;*/
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
