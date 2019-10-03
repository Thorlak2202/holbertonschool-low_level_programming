#include "holberton.h"
#include <stdio.h>

/**
* rev_string - reverses given string.
*
* @s: entry pointer character
*
*/

void rev_string(char *s)
{
int i, l, count;
char f;


for (i = 0 ; s[i] != '\0'; i++)
{
}
count = i - 1;

for (l = count; l > (count / 2); l--)
{
	f = s[l];
	s[l] = s[count - l];
	s[count - l] = f;
}

}
