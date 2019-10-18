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
	unsigned int *point;
	unsigned int i;

if (new_size > old_size)
{
	point = malloc(sizeof(old_size) + (new_size - old_size));
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
	point = malloc(new_size);
	if (point == NULL)
	{
		return (NULL);
	}
}
else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
point = malloc(sizeof(size_t) * new_size);
if (point == NULL)
{
	return (NULL);
}
for (i = 0; i < new_size && i < old_size; i++)
{
	point[i] = ((int *)ptr)[i];
}
free(ptr);
return (point);
}
