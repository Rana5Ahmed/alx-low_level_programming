#include <stdlib.h>
#include "main.h"
/**
* *_fill - fills memory with a constant byte in our case ZEROS 
* @M: memory area to be filled
* @b: char to copy
* @n: number of times to copy b
*
* Return: pointer to the memory area M
*/
char *_fill(char *M, char b,unsigned int n )
{
char *zero = M;
while(n--)
*M++ = b;
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
void*ptr;
if (nmemb == 0 || size == 0)
return(NULL);
ptr = malloc(nmemb*sizeof(int)) ;
if (ptr == NULL)
return(NULL);
_fill(ptr, 0,nmemb*sizeof(int));
return(ptr);
}
