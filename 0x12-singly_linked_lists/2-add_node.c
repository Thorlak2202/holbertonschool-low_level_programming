#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - prints a linked list.
*
* @head: pointer to the start of the list.
* @str: pointer assigned to the string to be added to the list.
*
* Return: returns the address of the new element, or NULL if fails.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int i = 0;

new = malloc(sizeof(list_t));
if (new == NULL)
{
	return (NULL);
}
new->str = strdup(str);
new->next = *head;
*head = new;

while (str[i])
{
i++;
}
new->len = i;

return (new);
}
