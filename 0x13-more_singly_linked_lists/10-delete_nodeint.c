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
	listint_t *prev;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (tmp != NULL && i == index && index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (tmp != NULL && i != index)
	{
		prev = tmp;
		tmp = tmp->next;
		i++;
		return (1);
	}
	prev->next = tmp->next;
	tmp->next = prev;
	free(tmp);

return (-1);
}
