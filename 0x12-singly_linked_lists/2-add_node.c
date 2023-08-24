#include <stdio.h>
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
list_t *add_node(list_t **head, const char *str)
{
    if (str == NULL)
        return NULL;

    list_t *new = malloc(sizeof(list_t));
    if (new == NULL)
        return NULL;

    new->str = strdup(str);
    if (new->str == NULL)
    {
        free(new);
        return NULL;
    }

    new->len = strlen(str);
    new->next = *head;
    *head = new;

    return *head;
}
