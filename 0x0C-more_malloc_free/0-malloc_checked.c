#include <stdlib.h>
#include "main.h"
/**
* *malloc_checked- allocate memory with malloc and exit if allocation failed
* @b : number of bytes
*
*return :Pointer to array M
*/
void *malloc_checked(unsigned int b)
{
void *M;
M = malloc(b);
if (M == NULL)
exit(98);
return (M);
}
