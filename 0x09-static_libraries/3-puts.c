#include "holberton.h"

/**
 * _puts - writes the string s and a trailing newline to stdout.
 *
 * @str: entry pointer character
 *
 */

void _puts(char *str)
{
  int i;
  char c;

  for (i = 0; str[i] != 0; i++)
    {
      c = str[i];
      _putchar(c);
    }
  _putchar('\n');
}
