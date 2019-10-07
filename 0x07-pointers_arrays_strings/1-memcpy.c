#include "holberton.h"

/**
* _memcpy - copies n bytes from memory area src to memory area dest.
*
* @src: entry values.
* @dest: memory area destiny.
* @n: n bytes to copy.
*
* Return: returns the pointer value.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
