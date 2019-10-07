#include "holberton.h"

/**
* _strpbrk - Returns a pointer to occurrence of c in the string s.
*
* @s: entry values.
* @accept: character to evaluate with.
*
* Return: returns the pointer value.
*/

char *_strpbrk(char *s, char *accept)
{
int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
		{
		s += i;
		return (s);
		}
		}
	}
return ('\0');
}
