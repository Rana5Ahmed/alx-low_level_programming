#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - concat two strings
* @s1: pointer to first string
* @s2: pointer to second string
* @n:number of bytes from s2
* Return: a pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len_s1 = 0, len_s2 = 0;
char *result = NULL;
unsigned int i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len_s1] != '\0')
len_s1++;
while (s2[len_s2] != '\0')
len_s2++;
if (n >= len_s2)
n = len_s2;
result = malloc((len_s1 + n + 1) * sizeof(char));
if (result == NULL)
return NULL;
for (i = 0; i < len_s1; i++)
result[i] = s1[i];
for (j = 0; j < n; j++)
result[i++] = s2[j];
result[i] = '\0';
return result;
}
