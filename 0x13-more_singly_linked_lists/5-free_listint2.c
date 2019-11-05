#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* free_listint2 - frees malloc of the functions.
*
* @head: pointer to the start of the list.
*
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
	else
	{
		return;
	}

	free(*head);
	(*head) = NULL;
}
