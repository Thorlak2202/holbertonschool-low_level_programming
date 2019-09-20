#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: return error 0
*/
int main(void)
{
int a, b;
for (a = '0'; a <= '9'; a++)
for (b = '0'; b <= '9'; b++)
{
putchar (a);
putchar (b);
if (b < '9')
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

