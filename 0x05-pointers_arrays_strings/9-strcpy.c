#include "holberton.h"

/**
* _strcpy - copies a string.
*
* @src:  pointer to the string.
* @dest: string being pointed.
*
*
* Return: the pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
