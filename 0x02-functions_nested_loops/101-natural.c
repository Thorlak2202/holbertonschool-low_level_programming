#include <stdio.h>
/**
* main - inits the operation
*
* Return: always 0 when success.
*/
int main(void)
{
int x, y, z, sum;

for (x = 0 ; x < 1024; x++)
{
	y = x % 3;
	z = x % 5;

if (y == 0 || z == 0)
	{
	sum += x;
	}
}
printf("%d\n", sum);
return (0);
}
