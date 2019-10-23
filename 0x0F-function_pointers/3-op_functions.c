#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds two integers.
 *
 * @a: first argument to operate.
 * @b: second argument to operate.
 *
 * Return: returns the operation.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - substracs two integers.
*
* @a: first argument to operate.
* @b: second argument to operate.
*
* Return: returns the operation.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplies two integers.
*
* @a: first argument to operate.
* @b: second argument to operate.
*
* Return: returns the operation.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers.
 *
 * @a: first argument to operate.
 * @b: second argument to operate.
 *
 * Return: returns the operation.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - operates a module b.
 *
 * @a: first argument to operate.
 * @b: second argument to operate.
 *
 * Return: returns the operation.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
return (a % b);
}
