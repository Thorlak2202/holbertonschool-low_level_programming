#include "holberton.h"
/**
 * _isalpha - evaluates if is a letter
 *
 * @c: Character to be evaluated
 *
 * Return: 0 if not alpha
 */

int _isalpha(int c)
{
  if (c >= 95 && c <= 122)
    {
      return (1);
    }
  else if (c >=  65 && c <= 90)
    {
      return (1);
    }
  else
    {
      return (0);
    }
