#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free pointer dog pointer
 * @d: dog pointer
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
