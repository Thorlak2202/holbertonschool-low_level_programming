#include "holberton.h"

/**
 * factorial - factorizes the int n.
 *
 * @n: entry value.
 *
 * Return: Returns value of pointer.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
