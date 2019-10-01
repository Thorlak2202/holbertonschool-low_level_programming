#include "holberton.h"
/**
* swap_int - swaps the values of two integers.
*
* @a: entry pointer character
* @b: second entry value
*
* Return: 0 always when success.
*/

void swap_int(int *a, int *b)
{
int swap;

swap = *a;
*a = *b;
*b = swap;

}
