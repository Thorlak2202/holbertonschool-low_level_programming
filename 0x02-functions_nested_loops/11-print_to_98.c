#include "holberton.h"
#include "stdio.h"
/**
* print_to_98 - prints until 98
*
*@n: entry character
*
* Return: always 0 when success.
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		printf("%d, ", n);
		printf("98\n");
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		printf("%d, ", n);
		printf("98\n");
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
}
