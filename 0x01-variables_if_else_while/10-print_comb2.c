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
for (a = 0; a < 100 ; a++)
{
putchar((a / 10) + '0');
putchar((a % 10) + '0');
if (a < 99)
{
putchar(',');
putchar(' ');
}
else
putchar('\n');
}
return (0);
}
