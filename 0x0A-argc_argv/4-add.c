#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* main - prints the name of the program.
*
* @argc: size of argv array.
* @argv: flags.
*
* Return: 0 if success.
*/
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc >= 1)
{
	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
