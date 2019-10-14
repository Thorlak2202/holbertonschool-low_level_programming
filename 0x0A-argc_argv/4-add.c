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
int i, sum = 0, j;
char *s;

if (argc >= 2)
{
	for (i = 1; i < argc; i++)
	{
		s = argv[i];

		for (j = 0; *s != '\0'; j++)
	{
		if (s[j] >= 48 && s[j] <= 57)
		{
			sum += atoi(s);
			s++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	}
	printf("%d\n", sum);
}
else if (argc == 1)
{
	printf("0\n");
}
return (0);
}
