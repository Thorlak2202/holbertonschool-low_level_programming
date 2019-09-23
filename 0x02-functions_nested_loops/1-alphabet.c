#include "holberton.h"
/**
 * print_alphabet - function called to void
 *
 * Return: void
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; ++x)
	{
		_putchar(x);
	}
	_putchar('\n');
}

