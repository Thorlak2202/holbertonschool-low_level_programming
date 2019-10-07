#include "holberton.h"

/**
* _strspn - Returns a pointer to occurrence of c in the string s.
*
* @s: string to be evaluated.
* @accept: characters to evaluate with.
*
* Return: returns the pointer value.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, l = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				l++;
			}
		}
	}
return (l);
}
