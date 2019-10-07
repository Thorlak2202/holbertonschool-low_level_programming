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
int i, j, count;

	for (i = 0; s[i] != 0; i++)
	{
		count = s[i] - 1;

		for (j = 0; j < count; j++)
		{
		if (s[i] == c)
			{
			s += i;
			return (s);
			}
		}
	}
return ('\0');
}
