#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_nodeint - adds a new node to the beginning of a linked list.
*
* @head: pointer to the start of the list.
* @n: pointer assigned to the int to be added to the list.
*
* Return: returns the address of the new element, or NULL if fails.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
	return (NULL);
}

new->n = n;
new->next = *head;
*head = new;

return (new);
}
