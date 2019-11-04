#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* sum_listint - gets the node at given index.
*
* @head: pointer to the start of the list.
*
* Return: returns the sume of node’s data.
*/
int sum_listint(listint_t *head)
{
int count = 0;

	if (head == NULL)
	{
		return (0);
	}

if (head != NULL)
{
	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
}
return (count);
}
