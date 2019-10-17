#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strdup - creates an array with the character sent by parameter.
*
* @str: pointer to a newly allocated memory space.
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