#include <stdlib.h>
#include "main.h"
/**
* *_mem - fills memory with a constant byte
* @ptr1: memory area to be filled
* @b: char to copy
* @n: number of times to copy b
*
* Return: pointer to the memory area ptr1
*/
char *_mem(char *ptr1, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
ptr1[i] = b;
}
return (ptr1);
}
/**
* *_calloc - allocates memory for an array
* @nmemb: number of elements in the array
* @size: size of each element
*
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_mem(ptr, 0, nmemb * size);
return (ptr);
}
