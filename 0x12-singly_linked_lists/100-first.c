#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* print_first - prints before main.
*
*/
void print_first(void)
{
char s[] = "You're beat! and yet, you must allow,";
char s2[] = "I bore my house upon my back!";
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
putchar(s[i]);
}
putchar('\n');

for (i = 0; s2[j] != '\0'; j++)
{
putchar(s2[j]);
}
putchar('\n');
}
