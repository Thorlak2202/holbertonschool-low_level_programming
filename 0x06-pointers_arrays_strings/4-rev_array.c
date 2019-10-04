#include "holberton.h"

/**
* reverse_array - reverses given aray.
*
* @a: entry aray.
* @n: max value to be reversed.
*
*/

void reverse_array(int *a, int n)
{
int i, j, f, *l;
l = a;

	for (i = 1; i < n; i++)
	{
		l++;
	}
	for (j = 0; j < (i / 2); j++)
	{
		f = a[j];
		a[j] = *l;
		*l = f;
		l--;
	}
}
