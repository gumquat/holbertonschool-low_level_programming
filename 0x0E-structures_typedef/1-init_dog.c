/**
 *init_dog - initializes a variable of type struct dog
 *@d: the dog to be initialized
 *@name: the name of the dog getting passed in
 *@age: the age of the dog getting passed in
 *@owner: the name of the owner of the dog getting passed in
 */

#include "dog.h"
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
