#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - concat two strings
* @s1: pointer to first string
* @s2: pointer to second string
* @n:number of bytes from s2
*
* Return: a pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i = 0, j = 0, lens1 = 0, lens2 = 0;
while (s1 && s1[lens1])
lens1++;
while (s2 && s2[lens2])
lens2++;
if (n < lens2)
s = malloc(sizeof(char) * (lens1 + n + 1));
else
s = malloc(sizeof(char) * (lens1 + lens2 + 1));
if (ptr == NULL)
return (NULL);
while (i < lens1)
{
ptr[i] = s1[i];
i++;
}
while (n < lens2 && i < (lens1 + n))
ptr[i++] = s2[j++];
while (n >= lens2 && i < (lens1 + lens2))
ptr[i++] = s2[j++];
ptr[i] = '\0';
return (ptr);
}
