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
	new_node->n = n;
	temp = *h;

if (idx == 0)
	{
	*h = new_node;
	new_node->next = temp;
	new_node->prev = NULL;
	temp->prev = new_node;
	return (new_node);
	}

while (temp->next != NULL)
{
	if (i == idx - 1)
	{
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	return (new_node);
	}
	temp = temp->next;
	i++;
}

free(new_node);
return (NULL);
}
