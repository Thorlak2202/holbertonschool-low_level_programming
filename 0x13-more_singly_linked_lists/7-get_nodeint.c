#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* get_nodeint_at_index - gets the node at given index.
*
* @head: pointer to the start of the list.
* @index: parameter entry to search the node in that position.
*
* Return: returns the head node’s data.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *new = head;
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
