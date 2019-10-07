#include "holberton.h"

/**
* _memset - fills n bytes of the memory pointed by 's' with the byte 'b'.
*
* @s: entry string.
* @b: byte to fill.
* @n: n bytes to be filled.
*
* Return:  returns 0 when success.
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (0);
}
