#include <stdio.h>
#include "lists.h"
/**
* print_list - prints all the elements of a linked list
* @h: pointer to the list_t list to print
*
* Return: the number of nodes printed
*/
size_t print_list(const list_t *h)
{
    if (h == NULL)
        return 0;

    size_t count = 0;

    do
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);

        count++;
        h = h->next;
    } while (h != NULL);

    return count;
}
