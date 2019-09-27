#include "holberton.h"
/**
  * print_number - entry values to print.
  *
  * @n: values to print.
  *
  * Return: returns the result of mul
  */
void print_number(int n)
{
int y;

	if (n > 999)
{
	_putchar((n / 1000) + '0');
	_putchar(((n / 100) % 10) + '0');
	_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
}
else if (n <= 999 && n > 99)
{
	_putchar((n / 100) + '0');
	_putchar((n / 10 % 10) + '0');
	_putchar((n % 10) + '0');
}
else if (n <= 99 && n > 9)
{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
}
else if (n <= 9 && n >= 0)
{
	_putchar((n % 10) + '0');
}
else if (n < 0 && n >= -99)
{
	y = n * (-1);
	_putchar(45);
	_putchar((y / 10) + '0');
	_putchar((y % 10) + '0');
}
}
