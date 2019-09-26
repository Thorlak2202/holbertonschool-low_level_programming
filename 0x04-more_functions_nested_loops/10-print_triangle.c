#include "holberton.h"
/**
  * print_triangle- declares the size of the side of the triangle.
  *
  * @size: determines the size of the triangle.
  * Return: 0 if success.
  */
void print_triangle(int size)
{
int x, y, t;
if (size > 0)
{
for (x = 0 ; x < size; x++)
	{
	for (y = 0; y < (size - x) - 1; y++)
	{
		_putchar(' ');
	}
	for (t = 0; t < (size - y) - 1; t++)
	{
		_putchar(35);
	}
	_putchar(35);
	_putchar('\n');
	}

}
else
{
	_putchar('\n');
}
}
