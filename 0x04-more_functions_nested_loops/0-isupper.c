#include "holberton.h"
/**
  * _isupper - checks if the entry char is uppercase or not
  *
  *@c: entry character
  *
  * Return: 1 if uppercase, 0 otherwise.
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

