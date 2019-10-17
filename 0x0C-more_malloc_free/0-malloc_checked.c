#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *malloc_checked - assigns memory space with malloc.
*
* @b: pointer to a newly allocated memory space.
*
* Return: return NULL when function fails.
*/
void *malloc_checked(unsigned int b)
{
int *s;

s = malloc(b);
if (s == NULL)
{
exit(98);
}
return (s);
}
