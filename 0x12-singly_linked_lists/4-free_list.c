#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* free_list - frees malloc of the functions.
*
* @head: pointer to the start of the list.
*
*/
void free_list(list_t *head)
{
	list_t *freedom;

	while (head != NULL)
	{
		freedom = head;
		head = head->next;
		free(freedom->str);
		free(freedom);
	}
	if (head != NULL)
	{
	free(head->str);
	free(head->next);
	free(head);
	}
}
