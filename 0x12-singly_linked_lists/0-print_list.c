#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - prints a linked list.
*
* @h: pointer to the linked list.
*
* Return: returns the number of nodes.
*/
size_t print_list(const list_t *h)
{
unsigned long count = 0;

if (h != NULL)
{
	while (h != NULL)
	{
		if (h->str != NULL)
		{
		printf("[%d] %s\n", h->len, h->str);
	}
	else
	{
		printf("[%d] %s\n", 0, "(nil)");
	}
	h = h->next;
	count++;
	}
}
return (count);
}
