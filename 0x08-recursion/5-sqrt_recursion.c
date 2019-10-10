#include "holberton.h"

/**
 * _sqrt_recursion - returns the value of x raised to the power of y.
 *
 * @n: entry value.
 *
 * Return: Returns value of pointer.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n / _sqrt_recursion(n / 2));
	}
}
