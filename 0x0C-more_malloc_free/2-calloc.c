#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_calloc - creates an array with the character sent by parameter.
*
* @nmemb: number of elements sent by parameter.
* @size: size.
*
* Return: return NULL when function fails.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int j;

if (size == 0 || nmemb == 0)
{
return (NULL);
}
ptr = malloc(nmemb);
if (ptr == NULL)
{
	return (NULL);
}
for (j = 0; j < (nmemb); j++)
{
	ptr[j + 1] = 0;
}

return (ptr);
}
