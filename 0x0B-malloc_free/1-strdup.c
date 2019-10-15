#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *create_array - creates an array with the character sent by parameter.
*
* @str: pointer to a newly allocated memory space.
*
* Return: return NULL when function fails.
*/
char *_strdup(char *str)
{
int i;
char *s;

for (i = 0; str[i] != '\0'; i++)
{
	if (str == '\0')
	{
		return (NULL);
	}
	else
	{
		s = malloc(sizeof(char) * *str);
		s = str;
		if (s == NULL)
		{
			return (NULL);
		}
	}
}
return (s);
}
