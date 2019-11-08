#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index.
*
* @index: index, starting from 0 of the bit.
* @n: data.
*
* Return: 1 if it worked, or -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (n != NULL)
{
	if (index <= 32)
	*n = *n & (~(1 << index));
	else
	{
		return (-1);
	}
return (1);
}
else
	return (-1);
}
