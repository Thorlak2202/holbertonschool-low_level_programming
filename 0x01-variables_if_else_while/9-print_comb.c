#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: return error 0
*/
int main(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
putchar (a);
if (a < '9')
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
return (0);
}
