#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenate two strings
* @s1: pointer to the first string
* @s2: pointer to the second string
* @n: number of bytes from s2
* Return: a pointer to the concatenated string, or NULL on failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *ptr;
    int i, j, len_s1, len_s2;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
        ;
    for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
        ;

    if (n < len_s2)
        ptr = malloc(sizeof(char) * (len_s1 + n + 1));
    else
        ptr = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

    if (ptr == NULL)
        return (NULL);

    for (i = 0; s1[i] != '\0'; i++)
        ptr[i] = s1[i];

    for (j = 0; s2[j] != '\0' && j < n; j++)
    {
        ptr[i] = s2[j];
        i++;
    }

    ptr[i] = '\0';

    return (ptr);
}
