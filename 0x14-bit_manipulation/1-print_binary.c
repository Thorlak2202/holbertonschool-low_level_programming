#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* print_binary - prints the binary representation of a number..
*
* @n: pointer to a binary.
*
*/
void print_binary(unsigned long int n)
{
if ((n >> 1) > 0)
{
	print_binary(n >> 1);
}
	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
