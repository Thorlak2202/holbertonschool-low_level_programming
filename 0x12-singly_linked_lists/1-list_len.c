#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* list_len - prints a linked list.
*
* @h: pointer to the linked list.
*
* Return: returns the number of nodes.
*/
size_t list_len(const list_t *h)
{
unsigned long count = 0;

if (h != NULL)
{
	while (h != NULL)
	{
	h = h->next;
	count++;
	}
}
return (count);
}
