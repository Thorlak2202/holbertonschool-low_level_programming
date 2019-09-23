#include "holberton.h"
/**
   * print_alphabet_x10 - function called to void
    *
     * Return: void
      */
void print_alphabet_x10(void)
{
	int b = 0, f;

	while (b <= 9)
	{
		for (f = 'a'; f <= 'z'; ++f)
		{
			_putchar(f);
		}

		_putchar('\n');
		 b++;

	}
}
