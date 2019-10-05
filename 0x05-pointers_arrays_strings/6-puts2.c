#include "holberton.h"

/**
* puts2 - prints every other character of a string.
*
* @str: entry pointer character
*
*/

void puts2(char *str)
{
int i, s;

	for(i = 0; str[i] != '\0'; i++)
	{
		if (str[i + 1] == '\0')
		{
			_putchar(str[i]);
			break;
		}
		else
		{
		s = str[i];
		_putchar(s);
		}
	i++;
	}
_putchar('\n');
}
