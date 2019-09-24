#include "holberton.h"
/**
* print_last_digit - prints the last digit of the evaluated string.
*
* @n: Character to be evaluated.
*
* Return: 1 if positive. 0 if zero. -1 if negative.
*/

int print_last_digit(int n)
{
int L;

L = n % 10;

if (L < 0)
{
	L = (L * (-1));
}
_putchar('0' + L);
return (L);
}
