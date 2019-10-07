#include "holberton.h"

/**
* _strchr - Returns a pointer to occurrence of c in the string s.
*
* @s: entry values.
* @c: character to evaluate with.
*
* Return: returns the pointer value.
*/

char *_strchr(char *s, char c)
{
int i;

	for (i = 0; s[i] != '0'; i++)
	{
		if (s[i] == c)
		{
		s += i;
		return (s);
		}
	}
return ('\0');
}
