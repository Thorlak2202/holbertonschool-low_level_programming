#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - prints the index of an int on an array when matches.
 *
 * @size: size of the array.
 * @array: array to be evaluated.
 * @cmp: action to be performed
 *
 * Return: 0 when success.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && size != 0 && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			return (i);
			i++;
		}
	}
	return (0);
}
