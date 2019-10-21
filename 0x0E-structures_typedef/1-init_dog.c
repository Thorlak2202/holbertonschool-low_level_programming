#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initalizes an struct named dog
*
* @d: pointer to the struct.
* @name: name of the dog.
* @age: age of the doggie.
* @owner: owner of the doggie.
*
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
