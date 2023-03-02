/**
 *free_dog - free dog
 *@d: the dogs to be freed
 */

#include "dog.h"
#include <stdlib.h>

void free_dog(dog_t *d)
{

	if (d == null)
	{
		return ();
	}

	free(d->name);
	free(d->owner);
	free(d);

}
