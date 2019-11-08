#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* get_bit - returns the value of a bit at a given index.
*
* @index: index, starting from 0 of the bit.
* @n: data.
*
* Return: the value of the bit at index index or -1 if an error occured.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int count = 0, value;
	unsigned long int i;

if (n != '\0')
{
	while ((i) > 1)
	{
		i = i / 10;
		count++;
	}
	if (index <= 32)
	value = (n >> index) & 1;
	else
	{
		return (-1);
	}

return (value);
}
else
	return (-1);
}
