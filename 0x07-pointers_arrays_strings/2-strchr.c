#include "holberton.h"

/**
* _strchr - copies n bytes from memory area src to memory area dest.
*
* @s: entry values.
* @c: memory area destiny.
*
* Return: returns the pointer value.
*/

char *_strchr(char *s, char c)
{
int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
	}
return ('\0');
}
