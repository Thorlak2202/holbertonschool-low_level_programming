#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* set_bit - sets the value of a bit to 1 at a given index..
*
* @index: index, starting from 0 of the bit.
* @n: data.
*
* Return: 1 if it worked, or -1 if an error occurred.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (n != NULL)
{
	if (index <= 32)
	*n = 1 << index | *n;
	else
	{
		return (-1);
	}
return (1);
}
else
	return (-1);
}
