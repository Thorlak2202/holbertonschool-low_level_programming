#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

void ty_char(va_list typelist)
{
	printf("%c", va_arg(typelist, int));
}

void ty_int(va_list typelist)
{
	printf("%i", va_arg(typelist, int));
}

void ty_str(va_list typelist)
{
	printf("%s", va_arg(typelist, char *));
}

void ty_flo(va_list typelist)
{
	printf("%f", va_arg(typelist, double));
}

/**
* print_all - Prints all.
*
* @format: is a list of types of arguments passed to the function.
*
*/
void print_all(const char * const format, ...)
{

ty_t ty[] = {
{"c", ty_char},
{"i", ty_int},
{"s", ty_str},
{"f", ty_flo},
};

va_list typelist;
int i = 0;
int j = 0;

va_start(typelist, format);

while (format[i])
{
	j = 0;
	while (ty[j].ty)
	{	
		if (format[i] == *ty[j].ty)
		{
			ty[j].f(typelist);
		}
		j++;
	}
i++;
}
va_end(typelist);
printf("\n");
}