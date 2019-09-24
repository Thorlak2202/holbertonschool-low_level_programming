#include "holberton.h"

/**
* _islower - marks if a character is lowercase or uppercase
*
* @c: character to be checked
*
* Return: 0 for not lowercase. 1 for lowercase
*/

int _islower(int c)
{
	if (c >= 95 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
