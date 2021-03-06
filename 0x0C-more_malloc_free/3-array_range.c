#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *array_range - creates an array with the character sent by parameter.
*
* @min: min element sent by parameter.
* @max: max element sent by parameter.
*
* Return: return NULL when function fails.
*/
int *array_range(int min, int max)
{
	int *p, i = 0;

if (min > max)
{
	return (NULL);
}
p = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (p == NULL)
{
	return (NULL);
}
for (; min <= max; i++)
{
	p[i] = min;
	min++;
}
return (p);
}
