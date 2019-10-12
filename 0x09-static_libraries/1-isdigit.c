#include "holberton.h"
/**
 * _isdigit - checks if the entry char is digit or not
 *
 *@c: entry character
 *
 * Return: 1 if digit, 0 otherwise.
 */
int _isdigit(int c)
{
  if (c >= 48 && c <= 57)
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
