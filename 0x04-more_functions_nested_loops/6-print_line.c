#include "holberton.h"
/**
  * print_line - declares the times the line should be printed.
  *
  * @n: entry value.
  * Return: 0 if success.
  */
void print_line(int n)
{
int line;
if (n > 0)
{
	for (line = 0; line < n; ++line)
	{
		_putchar(95);
	}
_putchar('\n');
}
else
	{
		_putchar('\n');
	}

}
