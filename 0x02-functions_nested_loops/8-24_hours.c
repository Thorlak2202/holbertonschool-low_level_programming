#include "holberton.h"
/**
  * jack_bauer - prints minutes of jack bauer's life.
  *
  *
  * Return: 1 if positive. 0 if zero. -1 if negative.
  */
void jack_bauer(void)
{
int a, b, c, d;
int Hours;
int Minutes = 0;

for (Hours = 0 ; Hours <= 23; Hours++)
{
for (Minutes = 0; Minutes < 60; Minutes++)
{
a = (Hours / 10);
b = (Hours % 10);
c = (Minutes / 10);
d = (Minutes % 10);
_putchar (a + '0');
_putchar (b + '0');
_putchar (':');
_putchar (c + '0');
_putchar (d + '0');
_putchar ('\n');
}
}
}
