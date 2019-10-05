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
int i, j;
char st[5] = {'A', 'E', 'O', 'T', 'L'};
char lt[5] = {'4', '3', '0', '7', '1'};

for (i = 0; s[i] != 0; i++)
{
	for (j = 0; st[j] != 0; j++)
	{
		if ((s[i] == st[j]) || (s[i] == st[j] + 32))
		{
			s[i] = lt[j];
		}
	}
}
return (s);
}
