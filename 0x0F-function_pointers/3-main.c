#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
* main - operates two ints.
*
* @argc: size of argv array.
* @argv: flags.
*
* Return: 0 if success.
*/

int main(int argc, char **argv)
{
int c = 0, d = 0, e = 0;

int (*calculate_op)(int, int);

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}

c = atoi(argv[1]);
d = atoi(argv[3]);
calculate_op = get_op_func(argv[2]);

if (calculate_op == NULL)
{
	printf("Error\n");
	exit(99);
}
e = calculate_op(c, d);

printf("%i\n", e);

return (0);
}
