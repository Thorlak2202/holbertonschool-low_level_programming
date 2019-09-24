#include "holberton.h"

/*
* _islower - marks if a character is lowercase or uppercase
*
* return: always 0.
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
