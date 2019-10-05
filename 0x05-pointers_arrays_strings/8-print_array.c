#include "holberton.h"
#include <stdio.h>

/**
* print_array - prints n characters of an array.
*
* @a: array to be evaluated.
* @n: number of items of the array to be printed.
*
*/

void print_array(int *a, int n)
{
int i = 0;

for (i = 0; i < n; i++)
{
	if (i < (n - 1))
	{
		printf("%d, ", a[i]);
	}
	else
	{
		printf("%d\n", a[i]);
	}
}
}
