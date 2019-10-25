#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
* sum_them_all - sums the args sent by parameter
*
*@n: entry character
*
* Return: 1 if uppercase, 0 otherwise.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list entry;
	unsigned int i;
	unsigned int j = 0;

if (n != 0)
{
	va_start(entry, n);
	for (i = 0; i < n; i++)
	{
		j += va_arg(entry, int);
	}
	va_end(entry);
return (j);
}
return (0);
}
