#include "holberton.h"

/**
* leet - 7r4n5f0rm 4 57r1n6.
*
* @s: entry string.
*
* Return:  returns the string on capital mode.
*/

char *leet(char *s)
{
int i;

for (i = 0; s[i] != 0; i++)
{
	if ((s[i] == 'a') || (s[i] == 'A'))
	{
		s[i] = '4';
	}

}
return (s);
}
