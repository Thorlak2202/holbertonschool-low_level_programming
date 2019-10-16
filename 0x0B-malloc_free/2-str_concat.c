#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *str_concat - concatenates two strings.
*
* @s1: first string.
* @s2: second string.
*
* Return: return NULL when function fails.
*/
char *str_concat(char *s1, char *s2)
{
int i, j, m, k = 0, l = 0;
char *n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
while (s1[k])
{
	k++;
}
while (s2[l])
{
	l++;
}
l++;
m = k + l;
n = malloc(sizeof(char) * m);

if (n == NULL)
{
	return (NULL);
}
for (i = 0; i < k; i++)
{
	n[i] = *s1;
s1++;
}
	for (j = 0; j < l; j++)
	{
		n[i + j] = *s2;
s2++;
	}	
return (n);
}
