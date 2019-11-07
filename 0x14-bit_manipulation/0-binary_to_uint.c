#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* binary_to_uint - converts a binary number to an unsigned int.
*
* @b: pointer to a string of 0 and 1 chars.
*
* Return: returns the converted number, or 0 if fails
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int converted = 0, a = 1;

	while (b[i])
	{
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b == NULL)
		{
			return (0);
		}

		if (b[i] == '1')
		{
			converted += a;
			a += a;
		}
		else
		{
			a += a;
		}
	}
	a = 2;
return (converted);
}
