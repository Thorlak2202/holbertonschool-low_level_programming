#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* flip_bits -  counts the number of bits needed to flip.
*
* @m: target number.
* @n: source number.
*
* Return:  number of bits needed to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0, mask;

	mask = n ^ m;

	while (mask)
	{
		if ((mask & 1) == 1)
		{
		flips++;
		}
		mask >>= 1;
	}
	return (flips);
}
