#include "main.h"
/**
* *malloc_checked- allocate memory with malloc and exit if allocation failed  
* @b : int 
*return :Pointer to array M
*/
void *malloc_checked(unsigned int b)
{
int *M = malloc(b);
if (M == NULL)
{
    exit(98);
}
return (M);
}
