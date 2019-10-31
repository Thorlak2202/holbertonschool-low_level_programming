#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* free_list - frees malloc of the functions.
*
* @head: pointer to the start of the list.
*
* Return: returns the address of the new element, or NULL if fails.
*/
void free_list(list_t *head)
{

	if (head != NULL)
	{
	free(head->str);
	free(head->next);
	free(head);
	}
}
