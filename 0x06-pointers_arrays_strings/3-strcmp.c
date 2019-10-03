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
int i, j;

	for (i = 0; s1[i] != 0; i++)
	{
		for (j = 0; s2[j] != 0; j++)
		{
			if (s1[i] == s2[j])
			{
				return (0);
			}
			else if (s1[i] != s2[j])
			{
				return (s1[i] - s2[j]);
			}
		}
	}
return (0);
}

