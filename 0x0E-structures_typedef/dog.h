#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 *struct dog - make a structure called dog with three values
 *@owner: owner name
 *@age: dog age
 *@owner: owner name
 *Description: the attributes of dog
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
