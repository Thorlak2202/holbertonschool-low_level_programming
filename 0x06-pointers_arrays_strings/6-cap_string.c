#include "holberton.h"

/**
* cap_string - Capitalize an String.
*
* @s: entry string.
*
* Return:  returns the string on capital mode.
*/

char *cap_string(char *s)
{
int i;
char a, u;

for (i = 0; s[i] != '\0'; i++)
{
	if (s[0] >= 97 && s[0] <= 122)
	{
		a = s[0] - 32;
		s[0] = a;
	}
	else if ((s[i - 1] == '.' || s[i - 1] == '\n' || s[i - 1] == '\t' ||
		s[i - 1] == ';' || s[i - 1] == ',' || s[i - 1] == '!' || s[i - 1] == '"'
		|| s[i - 1] == '?' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
		|| s[i - 1] == '}' || s[i - 1] == ' ') && (s[i] > 97 && s[i] < 122))
	{
		u = s[i] - 32;
		s[i] = u;
	}
}
return (s);
}
