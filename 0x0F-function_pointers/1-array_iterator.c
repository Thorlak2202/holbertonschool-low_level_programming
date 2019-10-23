#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates an array.
 *
 * @size: size of the array.
 * @array: array to be evaluated.
 * @action: action to be performed
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (size != 0 && array != NULL)
{
	while (i < size)
	{
	action(array[i]);
	i++;
	}
}
}
