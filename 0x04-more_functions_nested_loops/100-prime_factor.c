#include <stdio.h>
#include <math.h>
/**
  * main - init the operation.
  *
  *
  * Return: 0 if success.
  */
int main(void)
{
long n = 612852475143;
long half = 3;
long f;
long y;

if (n % half == 0)
{
y = n / 2;

if (y / 2 != 0)
{
	for (f = 3; f < sqrt(n); f = f + 2)
{
	while (n % f == 0)
{
	n = n / f;
}
}
}
printf("%ld\n", n);
}
else
{
printf("malo\n");
}
return (0);
}
