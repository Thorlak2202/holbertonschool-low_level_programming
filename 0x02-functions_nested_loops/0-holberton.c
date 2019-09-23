#include "holberton.h"
/**
* _putchar - writes the character c to stdout
* main - inits the operation
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int main(void)
{
	int i;
	char a[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	for (i = 0; i < 9; ++i)
		_putchar(a[i]);
	_putchar('\n');
	return (0);
}

