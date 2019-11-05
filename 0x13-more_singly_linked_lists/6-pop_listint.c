#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* pop_listint - frees malloc of the functions.
*
* @head: pointer to the start of the list.
*
* Return: returns the head node’s data.
*/
int pop_listint(listint_t **head)
{
listint_t *new;
int i = 0;


if (*head == NULL)
{
	return (0);
}
new = *head;
*head = (*head)->next;
i = new->n;
if (new != NULL)
{
free(new);
}
return (i);
}
