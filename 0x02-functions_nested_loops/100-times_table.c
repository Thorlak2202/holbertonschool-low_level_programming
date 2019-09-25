#include "holberton.h"
/**
* print_times_table - Multiplication Tables
*@n: variable evaluated
* Return: always 0 when success.
*/
void print_times_table(int n)
{
int x, y, z;

if (n < 15 && n > 0)
{
	for (x = 0; x <= n; x++)
{
	for (y = 0; y <= n; y++)
	{
		z = (x * y);
		if (z > 9 && z <= 99)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(((z / 10) % 10) + '0');
			_putchar((z % 10) + '0');
		}
		else if (z <= 9 && z >= 0)
		{
			if (y != 0)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			}
			_putchar((z % 10) + '0');
		}
		else if (z > 99)
		{
			_putchar(',');
			_putchar(' ');
			_putchar((z / 100) + '0');
			_putchar(((z / 10) % 10) + '0');
			_putchar((z % 10) + '0');
		}
		}
	_putchar('\n');
}
}
}
