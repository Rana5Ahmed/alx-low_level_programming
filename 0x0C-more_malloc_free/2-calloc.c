#include <stdlib.h>
#include "main.h"
/**
* *_fill - fills memory with a constant byte in our case ZEROS
* @M: memory area to be filled
* @b: wanted value
* @n: number of times to put b
*
* Return: pointer to the memory area M
*/
char *_fill(char *M, char b, unsigned int n )
{
unsigned int i;
for (i = 0; i < n; i++)
{
M[i] = b;
}
return(M);
}
/**
* *_calloc - allocates memory for an array
* @nmemb: number of elements in the array
* @size: size of each element
*
* Return: pointer ptr to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
return(NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return(NULL);
_fill(ptr, 0, nmemb * size);
return(ptr);
}
