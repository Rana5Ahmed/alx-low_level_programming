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

    size_t count = 1;

    while (1)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);

        if (h->next == NULL)
            break;

        h = h->next;
        count++;
    }

    return count;
}
