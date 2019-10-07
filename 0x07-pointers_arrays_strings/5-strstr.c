#include "holberton.h"

/**
* _strstr - finds occurrence of substring needle in string haystack..
*
* @haystack: entry values.
* @needle: character to evaluate with.
*
* Return: returns the pointer value.
*/

char *_strstr(char *haystack, char *needle)
{
int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
		if (haystack[i] == needle[0])
		{
		haystack += i;
		return (haystack);
		}
		}
	}
return ('\0');
}
