#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* dlistint_len - prints a double linked list.
*
* @h: pointer to the double linked list.
*
* Return: returns the number of nodes.
*/
size_t dlistint_len(const dlistint_t *h)
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
