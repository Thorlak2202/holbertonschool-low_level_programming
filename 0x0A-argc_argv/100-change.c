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
int i, j, cent = 0;
char *s;

if (argc == 2)
{
	for (i = 1; i < argc; i++)
	{
		s = argv[i];

		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] < 0)
			{
			printf("Error\n");
			return (1);
			}
		}
	s++;
	cent = atoi(argv[i]);
	}
printf("%d\n", cent / 25);
}
else
{
printf("Error\n");
}
return (0);
}
