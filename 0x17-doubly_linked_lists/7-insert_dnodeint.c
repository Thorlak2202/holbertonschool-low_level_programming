#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - interts a new node at given index position
*
* @h: pointer to the start of the list.
* @idx: index position to add new node.
* @n: data.
*
* Return: returns the address of the new node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *h;
	unsigned int i = 0;
if (h == NULL)
{
	return (NULL);
}

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
	return (NULL);
}

if (idx == 0)
	{
	new_node->next = *h;
	*h = new_node;
	new_node->n = n;
	return (new_node);
	}

while (temp != NULL)
{
	if (i == idx - 1)
	{
	new_node->next = temp->next;
	temp->next = new_node;
	new_node->n = n;
	return (new_node);
	}
	temp = temp->next;
	i++;
}

free(new_node);
return (NULL);
}
