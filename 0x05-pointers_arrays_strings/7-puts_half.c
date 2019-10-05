#include "holberton.h"

/**
* puts_half - prints half of a string.
*
* @str: entry string
*
*/

void puts_half(char *str)
{
int i, l, count;
	for (i = 0 ; str[i] != '\0'; i++)
	{
	}
	count = i;

	for (l = (count / 2); str[l] != '\0'; l++)
	{
		if (count % 2 != 0)
		{
			count = (i + 2) / 2;

			for (l = count; str[l] != '\0'; l++)
			{
			_putchar(str[l]);
			}
		}
		else
		{
			_putchar(str[l]);
		}
	}
_putchar('\n');
}
