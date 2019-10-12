#include "holberton.h"

/**
 * *_strcat - appends the src string to the dest string.
 *
 * @dest: string 1, where the funcion is going to append.
 * @src: string to be apendd.
 *
 * Return: returns the final value of both srings.
 */

char *_strcat(char *dest, char *src)
{
  int i, j;

  for (i = 0; dest[i] != 0; i++)
    {
    }
  for (j = 0; src[j] != 0; j++)
    {
      dest[i] = src[j];
      i++;
    }

  dest[i] = '\0';

  return (dest);
}
