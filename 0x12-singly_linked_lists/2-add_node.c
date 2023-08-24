#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node - adds a new node at the beginning of a linked list
* @head: double pointer to the list_t list
* @str: string in the added node
*
* Return: size of list
*/
size_t print_list(const list_t *h)
{
size_t count = 0;
for (; h != NULL; h = h->next)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
count++;
}
return count;
}
