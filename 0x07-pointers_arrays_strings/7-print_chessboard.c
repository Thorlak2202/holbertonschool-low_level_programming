#include "holberton.h"

/**
* _strstr - finds occurrence of substring needle in string haystack..
*
* @haystack: entry values.
* @needle: character to evaluate with.
*
* Return: returns the pointer value.
*/

void print_chessboard(char (*a)[8])
{
int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
		_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
