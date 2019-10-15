#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *create_array - creates an array with the character sent by parameter.
*
* @size: size of the array.
* @c: character to form the array.
*
* Return: returns the function to create array.
*/

char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int j;

if (size == 0)
{
return (NULL);
}
ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
{
	return (NULL);
}
for (j = 0; j < size; j++)
{
	ptr[j] = c;
}
return (ptr);
}
