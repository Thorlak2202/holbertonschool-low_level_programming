#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - appends the src string to the dest string.
 *
 * @dest: string 1, where the funcion is going to append.
 * @src: string to be apended.
 * @n: controls the position of the string to be printed.
 *
 * Return: returns the final value of dest string.
 */

char *_strncat(char *dest, char *src, int n)
{
  int i, j;

  for (i = 0; dest[i] != 0; i++)
    {
    }
  for (j = 0; src[j] != 0; j++)
    {
      if (j < n)
	{
	  dest[i] = src[j];
	  i++;
	}
      else
	{
	  dest[i] = '\0';
	}
    }
  return (dest);
}
