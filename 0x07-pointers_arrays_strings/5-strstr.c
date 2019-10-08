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

	if (*needle == 0)
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] != '\0'; j++)
	{
		if (haystack[i + j] != needle[j])
		{
			break;
		}
		else if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		else if (haystack[i] == needle[0] && haystack[i + 1] == needle[1])
		{
			haystack += i;
			return (haystack);
		}
	}
	}
return (0);
}
