#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

typedef struct ty
{
	char *ty;
	void (*f)(va_list typelist);
}ty_t;

void ty_char(va_list typelist);
void ty_int(va_list typelist);
void ty_str(va_list typelist);
void ty_flo(va_list typelist);

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
