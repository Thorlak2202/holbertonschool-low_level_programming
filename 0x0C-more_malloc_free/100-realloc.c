#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_realloc - assigns a new space of memory.
*
* @ptr: min element sent by parameter.
* @old_size: previous size of memory allocated.
* @new_size: new size of memory allocated.
*
* Return: return NULL when function fails.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *point;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		point = malloc(new_size);

		if (point == NULL)
			return (NULL);
		
		return (point);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	point = malloc(new_size);

	if (point == NULL)
		return (NULL);

	for (i = 0; i < new_size && i < old_size; i++)
	{
		point[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (point);
}
