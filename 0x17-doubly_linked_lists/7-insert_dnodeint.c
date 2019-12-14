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
	unsigned int i = 0;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
	return (NULL);
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
	if (i == idx)
	{
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next = new_node;
	temp->next->prev = new_node;
	return (new_node);
	}
	temp = temp->next;
	i++;
}
if (i == idx)
{
	new_node->prev = temp;
	temp->next = NULL;
	temp->next = new_node;
}
if (i < idx)
{
free(new_node);
return (NULL);
}
return (new_node);
}
