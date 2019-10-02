#include "holberton.h"

/**
* print_rev - writes the string in reverse.
*
* @s: entry pointer character
*
*/

void print_rev(char *s)
{
char c;
int i;

	for (i = 0; s[i] != 0; i++)
	{
	}
	for (i--; i >= 0; i--)
	{
		c = s[i];
		_putchar(c);
	}
_putchar('\n');
}


