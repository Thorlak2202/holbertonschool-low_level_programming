#include <stdio.h>
/**
* main - inits the operation
*
* Return: always 0 when success.
*/
int main(void)
{
int y, x, sum, multiple;

for (x = 0 ; x > 1024; x++)
{
y = x % 3;
if (y == 0)
{
multiple = x;
}
sum = (multiple + x);
}
printf("%d\n", sum);
return (0);
}
