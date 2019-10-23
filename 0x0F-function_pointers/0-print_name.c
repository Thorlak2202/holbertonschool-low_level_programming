#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints the name of someone.
 *
 * @name: name to be printed.
 * @f: pointer to a function.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
