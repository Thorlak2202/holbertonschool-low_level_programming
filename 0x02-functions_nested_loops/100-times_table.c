#include "holberton.h"
/**
* times_table - Multiplication Tables
*
*
*
* Return: always 0 when success.
*/
void print_times_table(int n)
{
int x, y, z, c, d, e;

if (n < 15 && n > 0)
{
	for (x = 0; x <= n; x++)
{
	for (y = 0; y <= n; y++)
	{
		z = (x * y);
		c = (z / 100);
		d = (z / 10) % 10;
		e = (z % 10);

		if (z > 9 && z <= 99)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(d + '0');
			_putchar(e + '0');
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
			_putchar(e + '0');
		}
		else if (z > 99)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar(e + '0');
		}
		}
	_putchar('\n');
}
}
}
