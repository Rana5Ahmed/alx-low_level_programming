#include <stdlib.h>
#include "main.h"
/**
* *array_range - creates an array of integers
* @min: minimum range of values stored
* @max: maximum range of values stored and number of elements
*
* Return: pointer to the new array
*/
int *array_range(int min, int max)
{
void *ptr;
unsigned int i;
unsigned int length;
if (min > max)
return(NULL);
length = max - min + 1;
ptr = malloc(sizeof(int) * length);
if (ptr == NULL)
return(NULL);
for (i = 0; i < length; i++)
ptr[i] = min++;
return(ptr);
}
