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
int cents = 0, i, l;
char *j;

if (argc == 2)
{
	for (i = 0; i < argc; i++)
	{
		j = argv[i];

		for (l = 0; *j != '\0'; l++)
		{
			if (j[l] >= 0)
			{
			cents = atoi(argv[i]);
			j++;
			}
			else
			{
			printf("0\n");
			}

		}
	}
printf("%d\n", cents / 25);

}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
