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
if (new_size > old_size)
{
	ptr = malloc(sizeof(old_size) + (new_size - old_size));
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
	ptr = malloc(new_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
}
else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}
