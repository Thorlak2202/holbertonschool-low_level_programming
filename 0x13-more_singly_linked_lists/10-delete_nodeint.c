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
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *new_node;
	unsigned int i = 0;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
	return(-1);
}

if (temp != NULL)
{
	for (i = 0; i < index - 1; i++)
	{
		temp = temp->next;
	}
	new_node->next = temp->next;
	new_node->next = temp->next;
	temp->next = NULL;

}
return (1);
}
