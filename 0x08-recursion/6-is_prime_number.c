#include "holberton.h"

/**
 * is_prime_number - returns the value of x raised to the power of y.
 *
 * @n: entry value.
 *
 * Return: Returns 1 if not prime and 0 if prime.
 */

int is_prime_number(int n)
{
	if ((n <= 1) || ((n % 2 == 0 && n != 2)))
	{
		return (0);
	}
	else if (n % 5 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
