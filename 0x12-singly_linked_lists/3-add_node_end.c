#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of the list.
*
* @head: pointer to the start of the list.
* @str: pointer assigned to the string to be added to the list.
*
* Return: returns the address of the new element, or NULL if fails.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_end;
int i = 0;
list_t *end = *head;

new_end = malloc(sizeof(list_t));
if (new_end == NULL)
{
	return (NULL);
}

new_end->str = strdup(str);
new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}

while (end->next != NULL)
{
	end = end->next;
}

end->next = new_end;

while (str[i])
{
i++;
}
new_end->len = i;

return (new_end);
}
