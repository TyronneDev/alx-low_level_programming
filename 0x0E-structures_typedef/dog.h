#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog structure
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 *
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t -Typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */

