/**
 *
 *
 *
 *
 *
 */

#include "dog.h"
#include <stdlib.h>

void free_dog(dog_t *d)
{

	if (d == null)
	{
		return (NULL);
	}

	free(d->name);
	free(d->age);
	free(d->owner);

}
