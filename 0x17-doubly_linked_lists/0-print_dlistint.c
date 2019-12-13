#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
unsigned long count = 0;

if (h != NULL)
{
	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}
}
return (count);
}
