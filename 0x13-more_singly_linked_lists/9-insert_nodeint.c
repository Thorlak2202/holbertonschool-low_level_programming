#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* insert_nodeint_at_index - interts a new node at given index position
*
* @head: pointer to the start of the list.
* @idx: index position to add new node.
* @n: data.
*
* Return: returns the address of the new node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp = *head;
	unsigned int i = 0;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
	return (NULL);
}

if (temp != NULL)
{
	if (idx == 0)
	{
		new_node->next = temp->next;
		temp->next = new_node;
		new_node->n = n;
	}
	else
	{
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
	}
}
free(new_node);
return (NULL);
}
