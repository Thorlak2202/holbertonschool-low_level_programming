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
(void)*argv;
printf("%d\n", argc - 1);

return (0);
}
