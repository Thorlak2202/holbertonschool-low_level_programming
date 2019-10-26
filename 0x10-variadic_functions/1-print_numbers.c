#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints Numbers.
*
* @n: number of integers passed to the function.
* @separator: string to be printed between numbers.
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list entry;
	unsigned int i;
if (n != 0)
{
va_start(entry, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL)
		{
		printf("%d%s", va_arg(entry, int), separator);
		}
		else
		{
			printf("%d", va_arg(entry, int));
		}
	}
	printf("%d", va_arg(entry, int));
	va_end(entry);
	printf("\n");
}
else
{
	printf("\n");
}
}
