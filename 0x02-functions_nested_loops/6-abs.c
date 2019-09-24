#include "holberton.h"
/**
  * _abs - Returns the absolute value of the integer argument
  *
  * @s: Character to be evaluated
  *
  * Return: 0 if not alpha
  */

int _abs(int s)
{
	if (s < 0)
	{
		return (s * (-1));
	}
	else
		return (s);
}
