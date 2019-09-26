#include "holberton.h"
/**
  * print_square- declares the size of the sides of the sqare.
  *
  * @size: determines the size of the square.
  * Return: 0 if success.
  */
void print_square(int size)
{
int x, y;
if (size > 0)
{
for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
}
else
{
	_putchar('\n');
}
}
