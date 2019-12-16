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
	dlistint_t *new_node, *temp = *h;

if (h == NULL)
	return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
	return (NULL);
new_node->n = n;
if (idx == 0 && *h == NULL)
	{
	new_node->prev = NULL;
	new_node->next = NULL;
	*h = new_node;
	return (new_node);
	}
while (temp != NULL && idx > 1)
{
	temp = temp->next, idx--;
}
if (temp != NULL)
{
	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next == NULL)
		temp->next = new_node;
	else
	{
		temp->next->prev = new_node;
		temp->next = new_node;
	}
	return (new_node);
}

free(new_node);
return (NULL);
}
