#include "holberton.h"

/**
* *_strcmp - compares string values, position by position.
*
* @s1: string 1.
* @s2: string 2.
*
* Return: returns the diff value of the strings.
*/

int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != 0)
{
	if (s1[i] < s2[i])
	{
		return (s1[i] - s2[i]);
	}
	else if (s1[i] > s2[i])
	{
		return (s1[i] - s2[i]);
	}
	i++;
}
return (0);
}
