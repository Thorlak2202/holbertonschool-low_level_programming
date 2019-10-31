#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - prints a linked list.
*
* @h: pointer to the linked list.
*
* Return: returns the number of nodes.
*/
size_t print_list(const list_t *h)
{
int count = 0;

while (h != NULL)
{
if (h->str != NULL)
{
printf("[%d]%s\n", h->len, h->str);
h = h->next;
count++;
}
else
{
printf("[%d]%s\n", 0, "(nil)");
h = h->next;
count++;
}
}
return (count);
}
