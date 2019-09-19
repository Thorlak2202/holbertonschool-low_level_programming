#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: return error 0
*/

int main(void)
{
int n, Last;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of %d is", n);
Last = n % 10;
if (n > 5)
{
printf(" %d and is greater than 5\n", Last);
}
else if (n == 0)
{
printf(" %d and is 0\n", Last);
}
else if (n < 6)
{
printf(" %d and is less than 6 and not 0\n", Last);
}
return (0);
}
