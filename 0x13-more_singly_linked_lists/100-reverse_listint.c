#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* reverse_listint - reverses a list.
*
* @head: pointer to the start of the list.
*
* Return: returns the address of the new node.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *nxt = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}
	*head = prev;
	return (*head);
}
