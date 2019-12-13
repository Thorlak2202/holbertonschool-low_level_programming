#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_dnodeint - adds a new node to the beginning of a doubly linked list.
*
* @head: pointer to the start of the list.
* @n: pointer assigned to the int to be added to the list.
*
* Return: returns the address of the new element, or NULL if fails.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
	return (NULL);
}
if (head != NULL)
{
new->n = n;
new->next = *head;
*head = new;
}

return (new);
}
