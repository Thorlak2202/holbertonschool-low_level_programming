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

if (argc >= 2)
{
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
	{
		sum += atoi(argv[i]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	}
	printf("%d\n", sum);
}
else if (argc == 1)
{
	printf("0\n");
}

else
{
	printf("Errorisimo\n");
	return(1);
}
return (0);
}
