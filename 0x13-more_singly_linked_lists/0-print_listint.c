#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint - prints a linked list.
*
* @h: pointer to the linked list.
*
* Return: returns the number of nodes.
*/
size_t print_listint(const listint_t *h)
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
