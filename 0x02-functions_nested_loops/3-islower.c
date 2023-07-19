#include "main.h"
/**
* _islower function that returns 1 incase lower case , 0 otherwise 
*/
int _islower (int c)
{
if ('a' <= c && c <= 'z')
return(1);
else
return(0);
}
