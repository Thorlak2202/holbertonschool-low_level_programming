#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - function that uses the Linear search algorithm.
 *
 * @array: array to search into.
 * @size: size value of the array.
 * @value: value to be searched.
 *
 * Return: value on succes, -1 on failure.
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;

for (i = 0; i < size; i++)
	{
	printf("Value checked array[%li] = [%i]\n", i, array[i]);
	if (array[i] == value)
		return (i);
	}
if (i == size)
	return (-1);
return (0);
}
