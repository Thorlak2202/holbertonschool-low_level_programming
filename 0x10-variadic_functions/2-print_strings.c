#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints strings.
*
* @n: number of integers passed to the function.
* @separator: string to be printed between strings.
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list entry;
	unsigned int i;
	char *p;

	if (n != 0)
	{
		va_start(entry, n);

		for (i = 0; i < n; i++)
		{
			p = va_arg(entry, char *);

			if (p == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", p);
			}
			if (separator != 0 && i < n - 1)
			{
			printf("%s", separator);
			}
		}
		va_end(entry);
		printf("\n");
	}
}
