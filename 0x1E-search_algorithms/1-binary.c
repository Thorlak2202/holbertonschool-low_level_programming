#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - function that uses the binary search algorithm.
 *
 * @array: array to search into.
 * @size: size value of the array.
 * @value: value to be searched.
 *
 * Return: value on succes, -1 on failure.
 */

int binary_search(int *array, size_t size, int value)
{
int mid, i;
int first = 0;
int last = size - 1;
mid = (first + last) / 2;

if (array == NULL)
{
	return (-1);
}
else
{
	while (first <= last)
	{
		printf("Searching in array:");
		for (i = first; i < last; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[i]);
		if (array[mid] < value)
		{
			first = mid + 1;
		}
		else if (array[mid] == value)
		{
			return (mid);
		}
		else
		{
			last = mid - 1;
		}

		mid = (first + last) / 2;
	}
	if (first > last)
		return (-1);
}
return (0);
}
