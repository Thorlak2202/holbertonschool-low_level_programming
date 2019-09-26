#include "holberton.h"
/**
  * print_diagonal - declares the times the diagonal should be printed.
  *
  * @n: entry value.
  * Return: 0 if success.
  */
void print_diagonal(int n)
{
int space, diagonal;
if (n > 0)
{
	for (diagonal = 0; diagonal < n; diagonal++)
	{
		for (space = 0; space < diagonal; space++)
		{
			_putchar(' ');
		}
	_putchar(92);
	_putchar('\n');
	}
}
else
{
	_putchar('\n');
}
}

