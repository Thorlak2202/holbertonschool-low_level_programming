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
	int i, mul = 0;
if (argc >= 3)
{
	for (i = 1; i < argc; i++)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
	}
		printf("%d\n", mul);
}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
