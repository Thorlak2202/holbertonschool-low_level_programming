#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
* *_strncpy - copies a string.
*
* @dest: string 1.
* @src: string 2.
* @n: control parameter.
*
* Return: returns the final value of dest string.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

return (dest);
}
/**
* new_dog - initalizes an struct named dog
*
* @name: name of the dog.
* @age: age of the doggie.
* @owner: owner of the doggie.
*
* Return: returns a pointer to the new space.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0;
	dog_t *doggo;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	if (name != NULL)
	{
	while (name[i] != '\0')
	{
	i++;
	}
	}
	doggo->name = malloc(sizeof(char) * (i + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	if (owner != NULL)
	{
	while (owner[j] != '\0')
	{
		j++;
	}
	}
	doggo->owner = malloc(sizeof(char) * (j + 1));
	if (doggo->owner == NULL)
	{
	free(doggo);
	free(doggo->name);
	return (NULL);
	}
	doggo->age = age;
	doggo->name = _strncpy(doggo->name, name, i + 1);
	doggo->owner = _strncpy(doggo->owner, owner, j + 1);
	return (doggo);
}
