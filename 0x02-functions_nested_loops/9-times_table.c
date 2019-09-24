#include "holberton.h"
/**
* times_table - Multiplication Tables
*
*
* Return: always 0 when success.
 */
void times_table(void)
{
int x, y, z, c, d;
for (x = 0; x <= 9; x++)
{
	for (y = 0; y <= 9; y++)
	{
		z = (x * y);
		c = (z / 10);
		d = (z % 10);

		if (z > 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(c + '0');
			_putchar(d + '0');
		}
		else
		{
			if (y != 0)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			_putchar(d + '0');
		}
	}
	_putchar('\n');
}
}
