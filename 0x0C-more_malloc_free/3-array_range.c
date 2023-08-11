#include <stdlib.h>
#include "main.h"
/**
* *array_range - store values started from min to max where min , max included
* @min: Start number
* @max:End number
*
* Return: Array of int
*/
int *array_range(int min, int max)
{
void *ptr;
unsigned int i;
unsigned int length;
length = max - min + 1;
if(min > max)
return(NULL);
ptr = malloc(sizeof(int) * length);
if (ptr == NULL)
return(NULL);
for (i = min; i < length; i++)
ptr[i] = min++;
return(ptr);
}
