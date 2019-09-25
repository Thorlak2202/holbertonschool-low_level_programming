#include "holberton.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
int largest;
int x, y, z;

x = (a - b);
z = (b - c);
y = (c - a);

if (x > 0 && z > 0)
{
largest = 'a';
}
else if (x < 0 && z > 0)
{
largest = 'b';
}
else if (y > 0 && z < 0)
{
largest = 'c';
}
return (largest);
}
