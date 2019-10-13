#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* myname - prints the name of the program.
*
* @argc: size of argv array.
* @argv: flags.
*
* Return: 0 if success.
*/
int myname(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[0]);
}
return (0);
}
