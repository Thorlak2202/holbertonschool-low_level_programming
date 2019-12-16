#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of the list.
*
* @head: pointer to the start of the list.
* @n: pointer assigned to the string to be added to the list.
*
* Return: returns the address of the new element, or NULL if fails.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_end;
dlistint_t *end = *head;

new_end = malloc(sizeof(dlistint_t));
if (new_end == NULL)
{
	return (NULL);
}

new_end->n = n;
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
new_end->next = NULL;
new_end->prev = end;
	if (end != NULL)
		{
		end->next = new_end;
		}
	else
	{
	*head = new_end;
	}

return (new_end);
}
