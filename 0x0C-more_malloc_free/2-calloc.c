#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *string_nconcat - creates an array with the character sent by parameter.
*
* @s1: first string.
* @s2: second string.
* @n: max value to cut second string.
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
ptr = malloc(size * nmemb);
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