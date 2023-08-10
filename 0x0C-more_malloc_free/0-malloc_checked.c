#include "main.h"
/**
* *malloc_checked- allocate memory with malloc and exit if allocation failed
* @b : int
*return :Pointer to array m
*/
void *malloc_checked(unsigned int b)
{
void *M ; 
M = malloc(b);
if (M == NULL)
exit(98);
return (M);
}
