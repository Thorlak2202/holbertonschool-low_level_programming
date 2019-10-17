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
	int *p, i, j;

if (min > max)
{
	return (NULL);
}
p = malloc(sizeof(int) * (max - min)+1);
if (p == NULL)
{
	return (NULL);
}
for (i = 0; i <= min; i++)
{	
	for (j = min; j<= max; j++)
	{
	p[i] = i;
	}
}
return (p);
}
