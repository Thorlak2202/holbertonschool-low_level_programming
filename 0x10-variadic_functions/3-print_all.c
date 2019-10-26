#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* ty_char - Prints type char.
* @sep: prints separator.
* @typelist: list of args.
*/
void ty_char(va_list typelist, char *sep)
{
	printf("%s", sep);
	printf("%c", va_arg(typelist, int));
}
/**
* ty_int - Prints type int.
* @sep: prints separator.
* @typelist: list of args.
*/
void ty_int(va_list typelist, char *sep)
{
	printf("%s", sep);
	printf("%i", va_arg(typelist, int));
}
/**
* ty_str -  Prints type string.
* @sep: prints separator.
* @typelist: list of args.
*/
void ty_str(va_list typelist, char *sep)
{
	char *p;

	p = va_arg(typelist, char *);

	if (p == NULL)
	{
		printf("%s", sep);
		printf("(nil)");
	}
	else
	{
	printf("%s", sep);
	printf("%s", p);
	}
}
/**
* ty_flo -  Prints type float.
* @sep: prints separator.
* @typelist: list of args.
*/
void ty_flo(va_list typelist, char *sep)
{
	printf("%s", sep);
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
char *sep = "";

va_start(typelist, format);

while (format[i])
{
	j = 0;
	while (ty[j].ty)
	{
		if (format[i] == *ty[j].ty)
		{
			ty[j].f(typelist, sep);
		}
		j++;
	}
sep = ", ";
i++;
}
va_end(typelist);
printf("\n");
}
