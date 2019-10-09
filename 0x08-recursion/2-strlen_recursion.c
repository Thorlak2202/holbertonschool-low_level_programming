#include "holberton.h"

/**
 * _strlen_recursion - prints a string, followed by a new line.
 *
 * @s: entry value string.
 *
 * Return: Returns value of pointer.
 */

int _strlen_recursion(char *s)
{
int i = 0;
	if (*s)
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
