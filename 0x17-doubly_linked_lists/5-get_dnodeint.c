#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* get_dnodeint_at_index - gets the node at given index.
*
* @head: pointer to the start of the list.
* @index: parameter entry to search the node in that position.
*
* Return: returns the head node’s data.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *new = head;
unsigned int i = 0;

while (new != NULL)
{
	if (i == index)
	{
	return (new);
	}
	i++;
	new = new->next;
}
return (0);
}
