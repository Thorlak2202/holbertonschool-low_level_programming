#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *string_nconcat - creates an array with the character sent by parameter.
*
* @s1: first string.
* @s2: second string.
* @n: max value to cut second string.
*
* Return: return NULL when function fails.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, m;
char *s;
unsigned int j;

if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}
while (s1[i] != '\0')
{
i++;
}
m = (i + n) + 1;
s = malloc(sizeof(char) * m);
if (s == NULL)
{
	return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
	s[i] = s1[i];
}
for (j = 0; (j < n && s2[j] != '\0'); j++)
{
	s[i] = s2[j];
	i++;
}
s[i] = '\0';
return (s);
}
