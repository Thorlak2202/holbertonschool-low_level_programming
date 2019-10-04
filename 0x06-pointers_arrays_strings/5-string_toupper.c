#include "holberton.h"

/**
* *string_toupper - tranforms given string to uppercase.
*
* @s: entry string.
*
* Return:  returns the string on uppercase.
*/

char *string_toupper(char *s)
{
int i;
char a;

for (i = 0; s[i] != '\0'; i++)
{
	if (s[i] >= 97 && s[i] <= 122)
	{
		a = s[i] - 32;
		s[i] = a;
	}
}
return (s);
}
