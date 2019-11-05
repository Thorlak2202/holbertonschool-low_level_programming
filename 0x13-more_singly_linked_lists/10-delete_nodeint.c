#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* delete_nodeint_at_index - deletes a node at given index position.
*
* @head: pointer to the start of the list.
* @index: index position of the node.
*
* Return: returns the address of the new node.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}

	while (tmp)
	{
	if (index == 0)
	{
		prev = *head;
		*head = prev->next;
		free(prev);
		return (1);
	}

	if (index - 1 == i)
	{
		prev = tmp->next;
		tmp->next = prev->next;
		free(prev);
		return (1);
	}
		tmp = tmp->next;
		i++;
	}

return (-1);
}
