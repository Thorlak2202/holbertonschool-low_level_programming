#include "holberton.h"
/**
  * more_numbers - entry integers
  *
  *
  * Return: 0 if success.
  */
void more_numbers(void)
{
int x = 0;
int z, y, f;

while (x <= 9)
{
	for (z = 0; z <= 14; z++)
	{
		y = z % 10;
		f = z / 10;

		if (z > 9)
		{
		_putchar(f + '0');
		}
	_putchar(y + '0');
	}
x++;
_putchar('\n');
}
}
