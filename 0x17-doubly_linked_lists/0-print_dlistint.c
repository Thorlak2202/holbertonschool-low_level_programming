#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_dlistint - prints a doubly linked list.
*
* @h: pointer to the doubly linked list.
*
* Return: returns the number of nodes.
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
