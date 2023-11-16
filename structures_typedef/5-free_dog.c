#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory allocated for a dog
 * @d: pointer to the dog to be free
 **/

void free_dog(dog_t *d)

{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
