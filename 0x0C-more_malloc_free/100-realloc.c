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
	unsigned int *p;

if (new_size > old_size)
{
	p = malloc(sizeof(old_size) + (new_size - old_size));
	if (ptr == NULL)
	{
		return (NULL);
	}
}
else if (new_size == old_size)
{
	return (ptr);
}
else if (ptr == NULL)
{
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
}
else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
free(ptr);
return (p);
}
