#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* free_dog - frees the memory spaces saved for dogs.
*
* @d: pointer to the struct.
*
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
