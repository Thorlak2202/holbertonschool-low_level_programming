#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* listint_len - prints a linked list.
*
* @h: pointer to the linked list.
*
* Return: returns the number of nodes.
*/
size_t listint_len(const listint_t *h)
{
unsigned long count = 0;

if (h != '\0')
{
	while (h != '\0')
	{
	h = h->next;
	count++;
	}
}
return (count);
}
