#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the name of the program.
*
* @argc: size of argv array.
* @argv: flags.
*
* Return: 0 if success.
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
