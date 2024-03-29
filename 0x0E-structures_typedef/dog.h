#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure definition and
 * dog is the structure tag (or identifier)
 * @name: referes to name of the dog
 * @age: age of the dog
 * @owner: name of dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t; /* dog_t - the new name for the type struct dog */

int _putchar(char);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
