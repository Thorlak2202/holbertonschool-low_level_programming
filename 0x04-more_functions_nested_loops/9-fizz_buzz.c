#include <stdio.h>
/**
  * main - init the operation.
  *
  *
  * Return: 0 if success.
  */
int main(void)
{
int x;
	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (x % 5 == 0 && x != 100)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (x == 100)
		{
			printf("Buzz");
		}
		else
		{
		printf("%d", x);
		printf(" ");
		}
	}
printf("\n");
return (0);
}
