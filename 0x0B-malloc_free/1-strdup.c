#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strdup - creates an array with the character sent by parameter.
*
* @str: pointer to a newly allocated memory space.
*
* Return: return NULL when function fails.
*/
char *_strdup(char *str)
{
int i = 0,  j;
char *s;

if (str == '\0')
{
return (NULL);
}

while (str[i])
{
i++;
}
i++;
s = malloc(sizeof(char) * i);
if (s == NULL)
	{
	return (NULL);
	}
for (j = 0; j < i; j++)
	{
	s[j] = str[j];
	}
return (s);
}
